x, y, n = (int(i) for i in input().split())

if x*3 > y:
    three_unit_num = n // 3
    bara_unit_num = n - three_unit_num * 3
    print(three_unit_num*y + bara_unit_num*x)
else:
    print(n*x)
