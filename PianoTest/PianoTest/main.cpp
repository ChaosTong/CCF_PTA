#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n = 0;
    int a[100005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d ", a[n-1]>a[0]?a[n-1]:a[0]);
    float mid = 0;
    if (n % 2 == 0){
        if ((a[n/2-1] + a[n/2]) % 2 == 0) {
            mid = (a[n/2-1] + a[n/2]) / 2;
            printf("%.0f ", mid);
        } else {
            mid = (a[n/2-1] + a[n/2]) / 2 + 0.1;
            printf("%.1f ", mid);
        }
    } else {
        mid = a[n/2];
        printf("%.0f ", mid);
    }
    printf("%d", a[n-1]>a[0]?a[0]:a[n-1]);
    return 0;
}
