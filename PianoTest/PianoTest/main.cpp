#include <stdio.h>
#define maxn 10005

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int lang = 0;
    int pub = 0;
    int num = 0;
    int reg = 0;
    scanf("%d-%03d-%05d-%d", &lang, &pub, &num, &reg);
    int result = 0;
    result = lang * 1;
    char temp[5] = {0};
    
    while(pub>0){
        temp[ = pub%10;
        i -= 1;
        pub /= 10;
    }
    return 0;
}
