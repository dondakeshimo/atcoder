#include <cstdio>


int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            if (i + 2 * j == m - 2 * n) {
                printf("%d %d %d\n", n - i - j, i, j);
                return 0;
            } else if (i + 2 * j > m - 2 * n) {
                break;
            } else if (i + 2 * (n - i + 1) < m - 2 * n) {
                break;
            }
        }
    }

    printf("-1 -1 -1\n");
}
