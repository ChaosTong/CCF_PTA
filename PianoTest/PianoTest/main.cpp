#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n, count = 0;
    scanf("%d", &n);
    while (n > 0) {
        int temp = n%10;
        count += temp;
        n /= 10;
    }
    printf("%d", count);
    return 0; 
}
