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

const int maxn = 2010;
int G[maxn][maxn] = {0}, weight[maxn] = {0};
bool flag[maxn] = {false};
int k, numPerson = 0;

map<string, int> stringToInt;
map<int, string> intToString;
map<string, int> Gang;

void DFS(int &cur, int &head, int &totalValue, int &numGang) {
    flag[cur] = true;
    numGang += 1;
    if (weight[cur] > weight[head]) {
        head = cur;
    }
    for (int i = 0; i < numPerson; i++) {
        if (G[cur][i] > 0) {
            totalValue += G[cur][i];
            G[cur][i] = G[i][cur] = 0;
            if (flag[i] == false) {
                DFS(i, head, totalValue, numGang);
            }
        }
    }
}

void DFSTrave() {
    for (int i = 0; i < numPerson; i++) {
        if (flag[i] == false) {
            int cur = i, head = i, totalValue = 0, numGang = 0;
            DFS(cur, head, totalValue, numGang);
            if (totalValue > k && numGang > 2) {
                Gang[intToString[head]] = numGang;
            }
        }
    }
    cout << Gang.size() << endl;
    map<string, int>::iterator vi;
    for (vi = Gang.begin(); vi != Gang.end(); vi++) {
        cout << vi->first << " " << vi->second << endl;
    }
}

int change(string str) {
    if (stringToInt.find(str) != stringToInt.end()) {
        return stringToInt[str];
    }
    stringToInt[str] = numPerson;
    intToString[numPerson] = str;
    return numPerson++;
}

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        string str1;
        string str2;
        int w;
        cin >> str1 >> str2 >> w;
        int str1_int = change(str1);
        int str2_int = change(str2);
        G[str1_int][str2_int] += w;
        G[str2_int][str1_int] += w;
        weight[str1_int] += w;
        weight[str2_int] += w;
    }
    DFSTrave();
    
    return 0;
}
