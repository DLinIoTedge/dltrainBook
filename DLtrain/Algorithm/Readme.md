
# Train CNN

Dataset of pairs of (x,y) is given and fixed.  Where x is input and y is score at output ( or label )

 Variable W is weights. Start with W(0)  which is random . Change W(k) at every time Loss function W is computed.
 
 During the forward pass the score function computes class scores, stored in vector f.
 
 The loss function contains two components: The data loss computes the compatibility between the scores f and the labels y. The regularization loss is only a function of the weights. 
 
 During Gradient Descent, we compute the gradient on the weights (and optionally on data if we wish) and use them to perform a parameter update during Gradient Descent
 
 
 
 

![image](https://user-images.githubusercontent.com/58679469/233825240-19563883-685f-4b29-b516-7f7fab9dd32e.png)




# Reference

https://cs231n.github.io/optimization-1/

