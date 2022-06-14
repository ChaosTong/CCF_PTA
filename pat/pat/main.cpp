#include <stdio.h>
#define maxn 10005

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n = 0;
    int data[maxn] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        int c;
        scanf("%d", &c);
        data[c] += 1;
    }
    int k = 0;
    for (int i = 0; i < maxn; i++) {
        if (data[i] > data[k]) {
            k = i;
        }
    }
    printf("%d", k);
    return 0;
}
