#include <cstdio>
#include <string>
#include <iostream>


int main()
{
    int deg, dis;
    int a_deg, a_dis;
    std::string answer_deg;
    std::string dir[16] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
                           "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};

    scanf("%d %d", &deg, &dis);

    a_deg = ((deg * 10 + 1125) / 2250) % 16;
    answer_deg = dir[a_deg];

    if (0 <= dis && dis < 12) {
        a_dis = 0;
    } else if (15 <= dis && dis < 93) {
        a_dis = 1;
    } else if (93 <= dis && dis < 201) {
        a_dis = 2;
    } else if (201 <= dis && dis < 327) {
        a_dis = 3;
    } else if (327 <= dis && dis < 477) {
        a_dis = 4;
    } else if (477 <= dis && dis < 645) {
        a_dis = 5;
    } else if (645 <= dis && dis < 831) {
        a_dis = 6;
    } else if (831 <= dis && dis < 1029) {
        a_dis = 7;
    } else if (1029 <= dis && dis < 1245) {
        a_dis = 8;
    } else if (1245 <= dis && dis < 1467) {
        a_dis = 9;
    } else if (1467 <= dis && dis < 1707) {
        a_dis = 10;
    } else if (1707 <= dis && dis < 1959) {
        a_dis = 11;
    } else if (1959 <= dis) {
        a_dis = 12;
    }

    if (a_dis == 0) {
        std::cout << 'C' << " " << a_dis << "\n";
    } else {
        std::cout << answer_deg << " " << a_dis << "\n";
    }
}
