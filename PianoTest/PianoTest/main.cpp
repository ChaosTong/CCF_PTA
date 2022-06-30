#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    int a[100005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d ", a[n-1]>a[0]?a[n-1]:a[0]);
    if (n%2 == 0) {
        if ((a[n/2-1] + a[n/2])%2!=0) {
            printf("%.1f", (a[n/2-1] + a[n/2])/2.0);
        } else {
            printf("%d", (a[n/2-1] + a[n/2])/2);
        }
    } else {
        printf("%d", a[n/2]);
    }
    printf(" %d\n", a[n-1]<a[0]?a[n-1]:a[0]);
}
