import numpy as np

n = int(input())

c = [[n, 0.1], [0.1, n]]
A = np.array(c)
B = np.linalg.inv(A)
B_sum = B.sum()

print(B_sum)
