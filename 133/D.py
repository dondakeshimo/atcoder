n = int(input())

a = [int(i) for i in input().split()] * 2
a_sum = sum(a[0:n])
x = []
for i in range(n):
    x.append(str(a_sum - sum(a[i + 1:i + n:2]) * 2) + " ")

print("".join(x))
