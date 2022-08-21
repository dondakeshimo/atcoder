n, m, t = (int(i) for i in input().split())

A = [int(i) for i in input().split()]

XY = {}
for mi in range(m):
    x, y = input().split()
    XY[int(x)] = int(y)

yes_flg = True
for i, a in enumerate(A, 1):
    t += XY.get(i, 0)
    t -= a
    if t <= 0:
        print("No")
        yes_flg = False
        break

if yes_flg:
    print("Yes")
