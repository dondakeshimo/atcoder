import numpy as np

n = int(input())

a = [int(i) for i in input().split()]
a = np.array(a)
b = np.zeros(n)
b_ind = np.arange(1, n + 1)
b[n // 2 + 1:] = a[n // 2 + 1:]

for i in range(n // 2 + 1, 0, -1):
    if np.sum(b[i - 1::i]) % 2 == a[i - 1]:
        b[i - 1] = 0
    else:
        b[i - 1] = 1

m = b[b == 1].shape[0]
print(m)
if m != 0:
    print(" ".join(map(str, b_ind[b == 1])))
