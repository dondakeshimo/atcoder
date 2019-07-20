import numpy as np

l, r = (int(i) for i in input().split())

if r - l > 4040:
    print(0)
else:
    LR = np.arange(l, r + 1)
    LR = LR % 2019
    idx_1 = LR.argmin()
    min_1 = LR[idx_1]
    LR[idx_1] = 2018
    min_2 = LR.min()

    print((min_1 * min_2) % 2019)
