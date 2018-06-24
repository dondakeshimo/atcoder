#include <cstdio>


int main()
{
    int n;

    scanf("%d", &n);

    int s, e;
    int sh, sm, eh, em, er;
    int r[288] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%2d%2d-%2d%2d", &sh, &sm, &eh, &em);

        if (em % 5) er = 5 - em % 5;
        else er = 0;

        s = (sh * 60 + sm - sm % 5) / 5;
        e = (eh * 60 + em + er) / 5;

        r[s] += 1;
        r[e] -= 1;
    }

    for (int i = 1; i < 288; i++) {
        r[i] += r[i-1];
    }

//    for (int i = 0; i < 288; i++) {
//        printf("%d", r[i]);
//    }
//    printf("\n");

    int flag = 0;
    for (int i = 0; i < 288; i++) {
        if (flag == 0 && r[i] > 0) {
            sh = i * 5 / 60;
            sm = i * 5 % 60;
            flag = 1;
        } else if (flag == 1 && r[i] < 1) {
            eh = i * 5 / 60;
            em = i * 5 % 60;
            flag = 0;
            printf("%02d%02d-%02d%02d\n", sh, sm, eh, em);
        }
    }

    if (flag == 1 && r[287]) {
        eh = 288 * 5 / 60;
        em = 288 * 5 % 60;
        printf("%02d%02d-%02d%02d\n", sh, sm, eh, em);
    }
}
