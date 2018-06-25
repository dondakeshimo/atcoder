#include <cstdio>


int main()
{
    int xa, ya, xb, yb, xc, yc;
    scanf("%d %d %d %d %d %d", &xa, &ya, &xb, &yb, &xc, &yc);

    xb = xb - xa;
    yb = yb - ya;
    xc = xc - xa;
    yc = yc - ya;

    float area;
    area = (xb * yc - yb * xc) / 2.0;
    if (area < 0) area = - area;

    printf("%lf\n", area);
}
