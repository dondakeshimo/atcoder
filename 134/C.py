import numpy as np

n = int(input())

A = [int(input()) for i in range(n)]
A = np.array(A)
a_max = np.max(A)
a_max_ind = np.argmax(A)
A[a_max_ind] = 0

for i in range(n):
    if i != a_max_ind:
        print(a_max)
    else:
        print(np.max(A))
