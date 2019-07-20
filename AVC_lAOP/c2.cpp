#include <cstdio>
using namespace std;


int main()
{
    int n;

    scanf("%d", &n);

    long int A[n], B[n];

    for (int i = 0; i < n; i++) {
        scanf("%ld %ld", &A[i], &B[i]);
    }

    long int counter = 0;
    int temp;

    for (int i = n - 1; i > -1; i--) {
        if ((A[i] + counter) % B[i] == 0) {
            continue;
        } else {
            temp = (A[i] + counter) / B[i];
            temp = (temp + 1) * B[i];
            temp = temp - (A[i] + counter);
            counter += temp;
        }
    }

    printf("%ld\n", counter);
}
