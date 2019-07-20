#include <cstdio>
#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include <limits>
using namespace std;


void Insert_array(vector<int>& Q, vector<vector<int>>& V);
int Extract_Min_array(vector<int>& shortest);
void Relax(vector<int>& shortest, vector<int>& pred,
           vector<vector<int>>& V, int u, int v);
vector<int> Dijkstra_array(vector<vector<int>>& V, int s);


int main()
{
    int h, w, l;

    scanf("%d %d", &h, &w);

    vector<vector<int>> c;
    c = vector<vector<int>>(10, vector<int>(10, 0));

    int counter = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf(" %d", &c[i][j]);
        }
    }

    int wall[h][w];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf(" %d", &wall[i][j]);
        }
    }

    for (int i = 1; i < 10; i++) {
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            printf("%d", wall[i][j]);
        }
        printf("\n");
    }

    // answer = Dijkstra_array(V, 0);
}


void Insert_array(vector<int>& Q, vector<vector<int>>& V)
{
    for (int i = 0; i < V.size(); i++) {
        Q[i] = i;
    }
}


int Extract_Min_array(vector<int> &Q, vector<int>& shortest)
{
    int q;
    int u;
    int del_idx;
    int min = numeric_limits<int>::max();

    for (int i = 0; i < Q.size(); i++) {
        q = Q[i];
        if (shortest[q] < min) {
            min = shortest[q];
            del_idx = i;
            u = q;
        }
    }

    Q.erase(Q.begin() + del_idx);

    return u;

}


void Relax(vector<int>& shortest, vector<int>& pred,
           vector<vector<int>>& V, int u, int v)
{
    if (shortest[u] + V[u][v] < shortest[v]) {
        shortest[v] = shortest[u] + V[u][v];
        pred[v] = u;
    }
}


vector<int> Dijkstra_array(vector<vector<int>> &V, int s)
{
    vector<int> shortest(V.size(), numeric_limits<int>::max());
    vector<int> pred(V.size(), numeric_limits<int>::max());
    vector<int> Q(V.size());

    shortest[s] = 0;

    Insert_array(Q, V);

    int u;

    while (!Q.empty()) {
        u = Extract_Min_array(Q, shortest);

        for (int v = 0; v < V.size(); v++) {
            if (V[u][v] != 0) Relax(shortest, pred, V, u, v);
        }
    }

    return shortest;
}
