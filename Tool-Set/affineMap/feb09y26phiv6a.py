# -*- coding: utf-8 -*-
"""Feb09y26phiv6a.ipynb

 S Jayakumar PhD


"""

import numpy as np

# ----------------------------
# 1. DataClassify with affine geometry
# ----------------------------
class DataClassify:
    def __init__(self, X, labels, n_classes):
        self.X = X
        self.labels = labels
        self.n_classes = n_classes
        self.N, self.d = X.shape

        # one-hot targets
        self.Y = np.eye(n_classes)[labels]

        # linear readouts
        self.A_input = None
        self.A_lifted = None

        # affine geometry
        self.bases = {}           # centroids / offsets
        self.subspace_bases = {}  # basis for affine subspace

    # -----------------------------
    # input-space baseline
    # -----------------------------
    def fit_input_linear(self):
        self.A_input, _, _, _ = np.linalg.lstsq(self.X, self.Y, rcond=None)
        return self

    # -----------------------------
    # lifted-space baseline
    # -----------------------------
    def fit_lifted_linear(self):
        # simple lifting: class-wise block embedding
        Phi = np.zeros((self.N, self.n_classes * self.d))
        for i in range(self.N):
            c = self.labels[i]
            Phi[i, c*self.d:(c+1)*self.d] = self.X[i]
        Phi = np.hstack([Phi, np.ones((self.N,1))])
        self.A_lifted, _, _, _ = np.linalg.lstsq(Phi, self.Y, rcond=None)
        return self

    # -----------------------------
    # affine subspaces
    # -----------------------------
    def fit_affine_subspaces(self, rank=None):
        for c in range(self.n_classes):
            Xc = self.X[self.labels == c]
            bc = Xc.mean(axis=0)
            Xc0 = Xc - bc
            _, _, Vt = np.linalg.svd(Xc0, full_matrices=False)
            U = Vt.T
            if rank is not None:
                U = U[:, :rank]
            self.bases[c] = bc
            self.subspace_bases[c] = U
        return self

    # -----------------------------
    # distance to class affine subspace
    # -----------------------------
    def affine_distance(self, x, c):
        b = self.bases[c]
        U = self.subspace_bases[c]
        x0 = x - b
        proj = U @ (U.T @ x0)
        return np.linalg.norm(x0 - proj)

    # -----------------------------
    # nearest affine classifier
    # -----------------------------
    def predict_nearest_affine(self, X):
        preds = []
        for x in X:
            dists = [self.affine_distance(x, c) for c in range(self.n_classes)]
            preds.append(np.argmin(dists))
        return np.array(preds)

# ----------------------------
# 2. Create synthetic data
# ----------------------------
np.random.seed(0)
X0 = np.random.randn(50,3) + np.array([3,0,0])
X1 = np.random.randn(50,3) + np.array([0,3,0])
X2 = np.random.randn(50,3) + np.array([0,0,3])
X = np.vstack([X0, X1, X2])
labels = np.array([0]*50 + [1]*50 + [2]*50)

# ----------------------------
# 3. Instantiate classifier
# ----------------------------
clf = DataClassify(X, labels, n_classes=3)
clf.fit_input_linear()
clf.fit_lifted_linear()
clf.fit_affine_subspaces(rank=2)   # !!! MUST call before stress test

# ----------------------------
# 4. Stress test function
# ----------------------------
def stress_test_affine_geometry(clf, n_trials=5, eps=0.05, margin_thresh=0.01):
    print("\nSTRESS TEST: Affine-subspace stability")
    print("=============================================\n")

    for c in range(clf.n_classes):
        print(f"Class {c} affine neighborhood:")
        b = clf.bases[c]              # centroid / offset
        U = clf.subspace_bases[c]     # basis of subspace

        for t in range(n_trials):
            alpha = eps * np.random.randn(U.shape[1])
            x_in = b + U @ alpha

            dists = np.array([clf.affine_distance(x_in, k) for k in range(clf.n_classes)])
            pred = np.argmin(dists)
            sorted_d = np.sort(dists)
            margin = sorted_d[1] - sorted_d[0]
            ambig_flag = " (AMBIGUOUS!)" if margin < margin_thresh else ""

            print(f"  trial {t}: pred={pred}, distances={np.round(dists,4)}, margin={margin:.3f}{ambig_flag}")
        print()

# ----------------------------
# 5. Run stress test
# ----------------------------
stress_test_affine_geometry(clf, n_trials=5, eps=0.05, margin_thresh=0.01)
