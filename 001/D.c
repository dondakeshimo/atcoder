#include <stdio.h>


int main(void)
{
    int n;

    scanf("%d", &n);

    int sh, sm, eh, em;
    int s, e;
    int r[288] = {0};
    int flg = 0;

    for (int i = 0; i < n; i++) {
        scanf("%2d%2d-%2d%2d", &sh, &sm, &eh, &em);
        printf("%d, %d, %d, %d", &sh, &sm, &eh, &em);
        s = (sh * 60 + sm - s % 5) / 5;
        e = (eh * 60 + em + e % 5) / 5;
        r[s] += 1;
        r[e + 1] -= 1;
    }

    if (r[0] > 0) {
        int f = 1;
    }

    for (int i = 1; i < 288; i++) {
        r[i] += r[i-1];
    }
}
