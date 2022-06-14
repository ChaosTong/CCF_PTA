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

const int maxn = 1010;

struct Node {
    int id;
    int layer;
};

vector<Node> list[maxn];
bool flag[maxn];
int n = 0, level = 0;

int BFS(int u) {
    queue<Node> q;
    Node user;
    user.id = u;
    user.layer = 0;
    q.push(user);
    flag[u] = true;
    int num = 0;
    while (!q.empty()) {
        Node top = q.front();
        q.pop();
        Node next;
        for (int i = 0; i < list[top.id].size(); i++) {
            next.id = list[top.id][i].id;
            next.layer = top.layer + 1;
            if (flag[next.id] == false && next.layer <= level) {
                flag[next.id] = true;
                q.push(next);
                num += 1;
            }
        }
    }
    
    return num;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    cin >> n >> level;
    Node user;
    for (int i= 1; i <= n; i++) {
        int num;
        cin >> num;
        user.id = i;
        user.layer = 0;
        for (int j = 0; j < num; j++) {
            int u;
            cin >> u;
            list[u].push_back(user);
        }
    }
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < maxn; j++) {
            flag[j] = false;
        }
        int id;
        cin >> id;
        int numForward = BFS(id);
        cout << numForward << endl;
    }
    
    return 0;
}
