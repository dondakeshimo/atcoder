#include <cstdio>
#include <string>
using namespace std;


int main()
{
    int n;
    scanf("%d", &n);

    int p1, p2;
    p1 = (n / 5) % 6;
    p2 = n % 5;

    string pat[6] = {"23456", "34561", "45612", "56123", "61234", "12345"};

    string answer;

    answer = pat[p1].substr(0, p2) + to_string(p1 + 1) + pat[p1].substr(p2, 6-p2);

    printf("%s\n", answer.c_str());
}
