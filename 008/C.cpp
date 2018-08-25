#include <cstdio>
using namespace std;


int main()
{
    int n;

    scanf("%d", &n);

    int coins[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    int reversers[n];
    double expected[n];

    for (int i = 0; i < n; i++) {
        reversers[i] = -1;
        expected[i] = 0;
        for (int j = 0; j < n; j++) {
            if (coins[i] % coins[j] == 0) reversers[i] += 1;
        }

        if (reversers[i] == 0) {
            expected[i] = 1.0;
        } else if (reversers[i] % 2 == 0) {
            expected[i] = (reversers[i] / 2 + 1) / double(reversers[i] + 1);
        } else {
            expected[i] = 1.0 / 2.0;
        }
    }

    float answer = 0;
    for (int i = 0; i < n; i++) {
        answer += expected[i];
    }

    printf("%lf\n", answer);

    return 0;
}
