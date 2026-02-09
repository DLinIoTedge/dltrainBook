 

````markdown
# Geometric Classification via Affine Subspace Lifting
**S. Jayakumar Ph.D

---

## Overview

This repository demonstrates **classification using affine subspace lifting**. Instead of using iterative, energy-intensive backpropagation in neural networks, we leverage **linear algebra and geometry** to perform classification efficiently.  

Key ideas:  
- Lift input data into a higher-dimensional space.  
- Each class occupies a **distinct affine subspace**.  
- Linear readouts or nearest-affine-subspace methods can classify samples directly.  

---

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

## 3. Summary

* Each class is embedded in a **distinct affine subspace** via $\phi(x)$.
* **Linear readouts** are sufficient to predict class labels.
* The **affine subspace theorem** ensures robust classification without backpropagation.
* Stress tests show stability of classification under small perturbations.

This approach leverages **geometry and linear algebra** for **simple, interpretable, and efficient classification**.

---
 

```

---
 
---

 
```

