n, a, b = (int(i) for i in input().split())

if a * n >= b:
    print(b)
else:
    print(a * n)
