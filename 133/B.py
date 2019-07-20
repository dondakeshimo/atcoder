import numpy as np

n, d = (int(i) for i in input().split())
X = [[int(ii) for ii in input().split()] for i in range(n)]
X = np.array(X)

count = 0
for i in range(X.shape[0]):
    for ii in range(X.shape[0]):
        if i == ii:
            continue
        if float.is_integer(np.linalg.norm(X[i] - X[ii])):
            count += 1

print(count // 2)
