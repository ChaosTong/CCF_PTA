#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int lang = 0;
    int pub = 0;
    int num = 0;
    char reg;
    scanf("%d-%03d-%05d-%c", &lang, &pub, &num, &reg);
    int pub_c = pub;
    int num_c = num;
    int result = 0;
    result = lang * 1;
    int i = 4;
    while(pub>0){
        int temp = pub%10;
        result += temp * i;
        i -= 1;
        pub /= 10;
    }
    i = 9;
    while(num>0){
        int temp = num%10;
        result += temp * i;
        i -= 1;
        num /= 10;
    }
    result = result%11;
    if (result == 10 && reg == 'X') {
        printf("Right");
    } else if (result == reg - '0') {
        printf("Right");
    } else {
        if (result == 10) {
            reg = 'X';
        } else {
            reg = '0'+result;
        }
        printf("%d-%03d-%05d-%c", lang, pub_c, num_c, reg);
    }
    return 0;
}
