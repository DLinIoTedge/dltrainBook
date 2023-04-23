
# 1. Train CNN


 
 ![image](https://user-images.githubusercontent.com/58679469/233830064-68e4ec90-9c44-4c73-92bc-09f232e49ef8.png)

 
 
## 1.1 Data Set with Label
Dataset of pairs of (x,y) is given and fixed.  Where x is input and y is score at output ( or label )

## 1.2  CNN  with Weights W
 Variable W is weights. Start with W(0)  which is random . Change W(k) at every time Loss function W is computed.

## 1.3  Compute Score (f) function
 During the forward pass the score function computes class scores, stored in vector f.
 
 ## 1.4 Compute Loss function
 The loss function contains two components: The data loss computes the compatibility between the scores f and the labels y. The regularization loss is only a function of the weights. 
 
 
 ## 1.5 Compute Gradient
 During Gradient Descent, we compute the gradient on the weights (and optionally on data if we wish) and use them to perform a parameter update during Gradient Descent
 
 ### 1.5.1  Numerical Gradient
 
 ### 1.5.1  Analytic Gradient
 


 



# Reference

https://cs231n.github.io/optimization-1/

