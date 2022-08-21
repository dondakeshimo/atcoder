n, p, q, r = (int(i) for i in input().split())
A = [int(i) for i in input().split()]

acu_A = []
sum_a = 0
for a in A:
    sum_a += a
    acu_A.append(sum_a)

def main():
    if sum_a < p:
        print("No")
        return

    is_p = False
    for p_i in range(n):
        if p_i != 0:
            if sum_a - acu_A[p_i - 1] < p:
                break

        sum_p = 0
        for p_j in range(p_i, n):
            sum_p += A[p_j]
            if sum_p == p:
                is_p = True
                break
            if sum_p > p:
                break

        if is_p:
            break

    if not is_p:
        print("No")
        return

    is_q = False
    sum_q = 0
    for q_j in range(p_j + 1, n):
        sum_q += A[q_j]
        if sum_q == q:
            is_q = True
            break
        if sum_q > q:
            break

    if not is_q:
        print("No")
        return

    is_r = False
    sum_r = 0
    for r_j in range(q_j + 1, n):
        sum_r += A[r_j]
        if sum_r == r:
            is_r = True
            break
        if sum_r > r:
            break

    if not is_r:
        print("No")
        return

    print("Yes")

main()
