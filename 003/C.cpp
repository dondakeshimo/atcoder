#include <cstdio>
#include <iostream>
using namespace std;


int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int r[n], l, i = 0;
    while(cin >> l) {
        r[i] = l;
        i++;
    }

    cout << r << "\n";

}
