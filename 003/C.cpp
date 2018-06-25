#include <cstdio>
#include <algorithm>


int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int r[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &r[i]);
    }

    std::sort(r, r+n);

    float c = 0;
    for (int i = n - k; i < n; i++) {
        c = (c + r[i]) / 2.0;
    }

    printf("%lf\n", c);
}
