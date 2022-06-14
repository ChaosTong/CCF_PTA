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

struct Node {
    int data;
    Node *left, *right;
};

void create(Node *&root, int data) {
    if (root == NULL) {
        root = new Node;
        root->data = data;
        root->left = root->right = NULL;
        return;
    }
    if (data < root->data) {
        create(root->left, data);
    } else {
        create(root->right, data);
    }
}

void preOrder(Node *root, vector<int>&vi) {
    if (root == NULL) { return; }
    vi.push_back(root->data);
    preOrder(root->left, vi);
    preOrder(root->right, vi);
}

void preOrderMirror(Node *root, vector<int>&vi) {
    if (root == NULL) { return; }
    vi.push_back(root->data);
    preOrderMirror(root->right, vi);
    preOrderMirror(root->left, vi);
}

void postOrder(Node *root, vector<int>&vi) {
    if (root == NULL) { return; }
    postOrder(root->left, vi);
    postOrder(root->right, vi);
    vi.push_back(root->data);
}

void postOrderMirror(Node *root, vector<int>&vi) {
    if (root == NULL) { return; }
    postOrderMirror(root->right, vi);
    postOrderMirror(root->left, vi);
    vi.push_back(root->data);
}

vector<int> origin, pre, preM, post, postM;
int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    cin >> n;
    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        origin.push_back(temp);
        create(root, temp);
    }
    
    preOrder(root, pre);
    preOrderMirror(root, preM);
    postOrder(root, post);
    postOrderMirror(root, postM);
    if (origin == pre) {
        cout << "YES" << endl;
        for (int i = 0; i < post.size(); i++) {
            if (i != post.size() - 1) {
                cout << post[i] << " ";
            } else {
                cout << post[i] << endl;
            }
        }
    } else if (origin == preM) {
        cout << "YES" << endl;
        for (int i = 0; i < postM.size(); i++) {
            if (i != pre.size() - 1) {
                cout << postM[i] << " ";
            } else {
                cout << postM[i] << endl;
            }
        }
    } else {
        cout << "NO";
    }
    
    return 0;
}
