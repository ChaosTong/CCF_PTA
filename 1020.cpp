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

const int maxn = 30;

struct Node {
    int data;
    Node *lchild;
    Node *rchild;
};

int n;
int postOrder[maxn];
int inOrder[maxn];
int num;

Node* create(int postL, int postR, int inL, int inR) {
    if (postL > postR) {
        return NULL;
    }
    Node *root = new Node;
    root->data = postOrder[postR];
    int k;
    for (k = inL; k <= inR; k++) {
        if (inOrder[k] == postOrder[postR]) {
            break;
        }
    }
    int leftCount = k - inL;
    root->lchild = create(postL, postL+leftCount-1, inL, k-1);
    root->rchild = create(postL+leftCount, postR-1, k+1, inR);
    
    return root;
}

void BFS(Node *root) {
    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
        Node *cur = q.front();
        q.pop();
        cout << cur->data;
        num += 1;
        if (num < n) {
            cout << " ";
        }
        if (cur->lchild != NULL) {
            q.push(cur->lchild);
        }
        if (cur->rchild != NULL) {
            q.push(cur->rchild);
        }
    }
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> postOrder[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> inOrder[i];
    }
    
    Node *root = create(0, n-1, 0, n-1);
    BFS(root);
    
    return 0;
}
