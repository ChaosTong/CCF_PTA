#  all

201409-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    int a[1005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int gap = a[j] - a[i];
            if (gap == 1 || gap == -1) {
                count += 1;
            }
        }
    }
    printf("%d", count);
    return 0;
}

```

201412-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    int a[1005] = {0};
    int b[1005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        b[a[i]] += 1;
        printf("%d", b[a[i]]);
        if (i != n-1) {
            printf(" ");
        }
    }
    return 0;
}
```

201503-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n, m;
    int a[1005][1005] = {0};
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = m-1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[j][i]);
            if (j == n-1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    return 0;
}

```

201509-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n, count = 0;
    int a[1005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] == a[i-1]) {
            
        } else {
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}

```

201512-1
```c
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
```
201604-1
```c

```
