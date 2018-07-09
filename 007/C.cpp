#include <cstdio>
#include <queue>
using namespace std;


int main()
{
    int r, c;
    int start[2], goal[2];

    scanf("%d %d", &r, &c);
    scanf("%d %d", &start[0], &start[1]);
    scanf("%d %d", &goal[0], &goal[1]);

    for (int i = 0; i < 2; i++) {
        start[i] -= 1;
        goal[i] -= 1;
    }

    char maze[r][c];
    char dummy;

    scanf("%c", &dummy);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%c", &maze[i][j]);
        }
        scanf("%c", &dummy);
    }

    queue<int> qx, qy, qn;
    qx.push(start[0]);
    qy.push(start[1]);
    qn.push(0);

    int x, y, n;
    int done[r][c] = {};

    while(1) {
        x = qx.front();
        y = qy.front();
        n = qn.front();

        if (maze[x - 1][y] == '.' && done[x - 1][y] == 0) {
            if (x - 1 == goal[0] && y == goal[1]) {
                printf("%d\n", n + 1);
                return 0;
            }
            qx.push(x - 1);
            qy.push(y);
            qn.push(n + 1);
            done[x - 1][y] = 1;
        }

        if (maze[x + 1][y] == '.' && done[x + 1][y] == 0) {
            if (x + 1 == goal[0] && y == goal[1]) {
                printf("%d\n", n + 1);
                return 0;
            }
            qx.push(x + 1);
            qy.push(y);
            qn.push(n + 1);
            done[x + 1][y] = 1;
        }

        if (maze[x][y - 1] == '.' && done[x][y - 1] == 0) {
            if (x == goal[0] && y - 1 == goal[1]) {
                printf("%d\n", n + 1);
                return 0;
            }
            qx.push(x);
            qy.push(y - 1);
            qn.push(n + 1);
            done[x][y - 1] = 1;
        }

        if (maze[x][y + 1] == '.' && done[x][y + 1] == 0) {
            if (x == goal[0] && y + 1 == goal[1]) {
                printf("%d\n", n + 1);
                return 0;
            }
            qx.push(x);
            qy.push(y + 1);
            qn.push(n + 1);
            done[x][y + 1] = 1;
        }

        qx.pop();
        qy.pop();
        qn.pop();
    }

    return 0;
}
