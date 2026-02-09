 

````markdown
# Geometric Classification via Affine Subspace Lifting

**Author:** S. Jayakumar Ph.D

---

## Overview

This repository demonstrates **classification using affine subspace lifting**. Instead of using iterative, energy-intensive backpropagation in neural networks, we leverage **linear algebra and geometry** to perform classification efficiently.  

Key ideas:  
- Lift input data into a higher-dimensional space.  
- Each class occupies a **distinct affine subspace**.  
- Linear readouts or nearest-affine-subspace methods can classify samples directly.  

---

## 1. Installation

```bash
# Clone this repository
git clone https://github.com/yourusername/affine-classification.git
cd affine-classification

# Make sure you have Python >= 3.7 and numpy installed
pip install numpy
````

---

## 2. Usage

```python
import numpy as np
from data_classify import DataClassify  # your Python file

# Create synthetic data
np.random.seed(0)
X0 = np.random.randn(50,3) + np.array([3,0,0])
X1 = np.random.randn(50,3) + np.array([0,3,0])
X2 = np.random.randn(50,3) + np.array([0,0,3])
X = np.vstack([X0, X1, X2])
labels = np.array([0]*50 + [1]*50 + [2]*50)

# Instantiate classifier
clf = DataClassify(X, labels, n_classes=3)
clf.fit_input_linear()
clf.fit_lifted_linear()
clf.fit_affine_subspaces(rank=2)

# Perform stress test
clf.stress_test_affine_geometry(n_trials=5, eps=0.05, margin_thresh=0.01)
```

---

## 3. Mathematical Formulation

### One-hot encoding of labels

For $N$ samples and $C$ classes:

$$
Y = \text{one_hot}(\text{labels}) \in \mathbb{R}^{N \times C}
$$

### Linear readout

Input-space:

$$
A_{\text{input}} = \arg\min_A | X A - Y |_F^2
$$

Lifted-space:

$$
\phi(x_i) =
\begin{bmatrix}
0 & \cdots & x_i & \cdots & 0 & 1
\end{bmatrix}^T \in \mathbb{R}^{C \cdot d + 1}
$$

$$
A_{\text{lifted}} = \arg\min_A | \Phi A - Y |_F^2
$$

### Affine subspaces for each class

Centroid (offset) of class $c$:

$$
b_c = \frac{1}{N_c} \sum_{i \in \text{class c}} x_i
$$

Affine subspace basis via SVD:

$$
X_c - b_c = U_c \Sigma V_c^\top
$$

Distance to class affine subspace:

$$
d_c(x) = | (x - b_c) - U_c U_c^\top (x - b_c) |_2
$$

Nearest affine prediction:

$$
\hat{c}(x) = \arg\min_c d_c(x)
$$

---

## 4. Summary

* Each class is embedded in a **distinct affine subspace** via $\phi(x)$.
* **Linear readouts** are sufficient to predict class labels.
* The **affine subspace theorem** ensures robust classification without backpropagation.
* Stress tests show stability of classification under small perturbations.

This approach leverages **geometry and linear algebra** for **simple, interpretable, and efficient classification**.

---

## 5. License

This repository is released under the MIT License.

```

---

###  Features of this Markdown `README.md`:
1. **Title, author, and horizontal lines**.  
2. **Installation and usage instructions** with Python code blocks.  
3. **Mathematical formulas** in LaTeX math mode (`$$ ... $$` for display math).  
4. **Step-by-step summary** emphasizing efficiency vs backpropagation.  
5. Ready to **paste directly in GitHub**, which renders LaTeX nicely in Markdown.  

---

 
```

