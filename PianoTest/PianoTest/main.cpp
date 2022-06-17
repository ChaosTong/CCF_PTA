#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int m, n;
    int s[10][5] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        s[i][0] = x1;
        s[i][1] = y1;
        s[i][2] = x2;
        s[i][3] = y2;
        s[i][4] = i+1;
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        int flag = 0;
        for (int j = n-1; j >= 0; j--) {
            if (x >= s[j][0] && x <= s[j][2] && y >= s[j][1] && y <= s[j][3]) {
                flag = 1;
                printf("%d\n", s[j][4]);
                int temp[5] = {0};
                for (int k = 0; k < 5; k++) {
                    temp[k] = s[n-1][k];
                    s[n-1][k] = s[j][k];
                    s[j][k] = temp[k];
                }
                break;
            }
        }
        if (flag == 0) {
            printf("IGNORED\n");
        }
    }
    return 0;
}
