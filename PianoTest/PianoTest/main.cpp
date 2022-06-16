#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    int mod = 1000000007;
    long long s[6][1005] = {0};
    scanf("%d", &n);
    for (int len = 1; len <= n; ++len) {
        s[0][len] = 1;
        s[1][len] = (s[1][len-1]*2 + s[0][len-1])%mod;
        s[2][len] = (s[2][len-1] + s[0][len-1])%mod;
        s[3][len] = (s[3][len-1]*2 + s[1][len-1])%mod;
        s[4][len] = (s[4][len-1]*2 + s[2][len-1] + s[1][len-1])%mod;
        s[5][len] = (s[5][len-1]*2 + s[3][len-1] + s[4][len-1])%mod;
    }
    printf("%lld", s[5][n]);
    return 0;
}
