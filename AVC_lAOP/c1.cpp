#include <cstdio>
using namespace std;


int main()
{
    long long int x;

    scanf("%lld", &x);

    long long int counter = 0;

    counter = x / 11;
    counter *= 2;
    if (x % 11 == 0) {
        counter = counter;
    } else if (x % 11 < 7) {
        counter += 1;
    } else {
        counter += 2;
    }

    printf("%lld\n", counter);
}
