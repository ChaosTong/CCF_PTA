#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
using namespace std;

const int maxn = 510;
const int INF = 1000000000;

int n, m, a, b;
int weight[maxn];
int G[maxn][maxn];

int flag[maxn];
int dis[maxn], w[maxn], num[maxn];

void Dij(int s) {
    fill(dis, dis+maxn, INF);
    dis[s] = 0;
    num[s] = 1;
    w[s] = weight[s];
    for (int i = 0; i < n; i++) {
        int u = -1, MIN = INF;
        for (int j = 0; j < n; j++) {
            if (flag[j] == false && dis[j] < MIN) {
                u = j;
                MIN = dis[j];
            }
        }
        if (u == -1) { return; }
        flag[u] = true;
        for (int k = 0; k < n; k++) {
            if (flag[k] == false && G[u][k] != INF) {
                if (dis[u] + G[u][k] < dis[k]) {
                    dis[k] = dis[u] + G[u][k];
                    w[k] = w[u] + weight[k];
                    num[k] = num[u];
                } else if (dis[u] + G[u][k] == dis[k]) {
                    if (w[u] + weight[k] > w[k]) {
                        w[k] = w[u] + weight[k];
                    }
                    num[k] += num[u];
                }
            }
        }
    }
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    cin >> n >> m >> a >> b;
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }
    int u, v, l;
    fill(G[0], G[0]+maxn*maxn, INF);
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> l;
        G[u][v] = G[v][u] = l;
    }
    Dij(a);
    cout << num[b] << " " << w[b];
    return 0;
}
