h, w = (int(i) for i in input().split())

G = []
for hi in range(h):
    gw = [i for i in input()]
    G.append(gw)

been = set()
i = 0
j = 0
while True:
    if G[i][j] == "U":
        if i == 0:
            print(i + 1, j + 1)
            break
        i -= 1
    elif G[i][j] == "D":
        if i == h - 1:
            print(i + 1, j + 1)
            break
        i += 1
    elif G[i][j] == "R":
        if j == w - 1:
            print(i + 1, j + 1)
            break
        j += 1
    elif G[i][j] == "L":
        if j == 0:
            print(i + 1, j + 1)
            break
        j -= 1

    if (i, j) in been:
        print(-1)
        break

    been.add((i, j))
