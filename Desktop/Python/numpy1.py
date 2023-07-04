import numpy as np

# Read matrix A from Amatrix.csv
A = np.genfromtxt('Amatrix.csv', delimiter=',')

# Read matrix B from Bmatrix.csv
B = np.genfromtxt('Bmatrix.csv', delimiter=',')

# Perform operations
sum_result = A + B
difference_result = A - B
product_result = np.matmul(A, B.T)

print("A + B:")
print(sum_result)

print("A - B:")
print(difference_result)

print("A * B.transpose():")
print(product_result)
