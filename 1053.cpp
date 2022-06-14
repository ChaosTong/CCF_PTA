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

const int maxn = 110;

struct Node {
    int weight;
    vector<int> child;
} nodes[maxn];
int path[maxn];
int n, non_leaf, weights;

bool cmp(int a, int b) {
    return nodes[a].weight > nodes[b].weight;
}

void BFS(int index, int level, int sum) {
    if (sum > weights) { return; }
    if (sum == weights) {
        if (nodes[index].child.size()>0) { return; }
        for (int i = 0; i < level; i++) {
            printf("%d", nodes[path[i]].weight);
            if (i == level - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
        return;
    }
    for (int i = 0; i < nodes[index].child.size(); i++) {
        path[level] = nodes[index].child[i];
        BFS(nodes[index].child[i], level+1, sum+nodes[nodes[index].child[i]].weight);
    }
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    cin >> n >> non_leaf >> weights;
    for (int i = 0; i < n; i++) {
        cin >> nodes[i].weight;
    }
    for (int i = 0; i < non_leaf; i++) {
        int non_leaf_node;
        int count;
        cin >> non_leaf_node >> count;
        for (int k = 0; k < count; k++) {
            int sub_node;
            cin >> sub_node;
            nodes[non_leaf_node].child.push_back(sub_node);
        }
        sort(nodes[non_leaf_node].child.begin(), nodes[non_leaf_node].child.end(), cmp);
    }
    
    path[0] = 0;
    BFS(0, 1, nodes[0].weight);
    
    return 0;
}
