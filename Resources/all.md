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
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n, count = 0;
    int p[1005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < n; i++) {
        if (i > 0 && i != n-1) {
            if ((p[i-1] - p[i]) * (p[i] - p[i+1]) < 0) {
                count += 1;
            }
        }
    }
    printf("%d", count);
    return 0; 
}
```

201609-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n, count = 0;
    int p[1005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if (i > 0) {
            int gap = p[i] - p[i-1];
            if (gap < 0) {
                gap *= -1;
            }
            if (gap > count) {
                count = gap;
            }
        }
    }
    printf("%d", count);
    return 0; 
}
```
201612-1
```c
```
201703-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n, k;
    int count = 0;
    int left = 0;
    int p[1005] = {0};
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if (left + p[i] >= k) {
            left = 0;
            count += 1;
        } else {
            left += p[i];
        }
    }
    if (left > 0) {
        count += 1;
    }
    printf("%d", count);
    return 0; 
}
```
201709-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    int count = 0;
    scanf("%d", &n);
    while (n >= 10) {
        if (n / 50 > 0) {
            count += (n / 50) * 7;
            n -= (n/50)*50;
        } else if (n / 30 > 0) {
            count += (n / 30) * 4;
            n -= (n/30)*30;
        } else if (n / 10 > 0) {
            count += (n / 10) * 1;
            n -= (n/10)*10;
        }
    }
    printf("%d", count);
    return 0; 
}
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```
201712-1
```c
```

quickSort
```c
void quickSort(int *number, int first, int last) {
    int i, j, pivot;
    int temp;
    if (first<last) {
        pivot = first;
        i = first;
        j = last;
        while (i<j) {
            while (number[i] <= number[pivot] && i<last)
                i++;
            while (number[j]>number[pivot])
                j--;
            if (i<j) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quickSort(number, first, j - 1);
        quickSort(number, j + 1, last);
    }
}
```
