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

201612-1
```c
#include <stdio.h>

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n;
    scanf("%d", &n);
    int a[1005] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    if (n % 2 == 0) {
        int i= n/2-1, j = n/2;
        if (a[i] != a[j]) {
            printf("-1");
            return 0;
        }
        int left = i, right = j;
        while (a[left] == a[i]) {
            left -=1;
        }
        while (a[j] == a[right]) {
            right += 1;
        }
        if (i-left == right-j) {
            printf("%d", a[i]);
            return 0;
        } else {
            printf("-1");
            return 0;
        }
    } else {
        int i = n/2;
        int left = i-1, right = i+1;
        while (a[left] == a[i]) {
            left -=1;
        }
        while (a[i] == a[right]) {
            right += 1;
        }
        if (i-left == right-i) {
            printf("%d", a[i]);
            return 0;
        } else {
            printf("-1");
            return 0;
        }
    }
    return 0;
}

```

201903-1
```c
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

202206-2
```c
#include <stdio.h>
//https://blog.csdn.net/nahnah_/article/details/125284225
struct point {
    int x, y;
};

int main() {
#ifdef ONLINE_JUDGE
#else
    freopen("f.in", "r", stdin);
#endif
    int n,l,s;
    scanf("%d %d %d", &n, &l, &s);
    struct point trees[1005];
    struct point map[55];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &trees[i].x, &trees[i].y);
    }
    int t = 0;
    for (int i = s; i >= 0; i--) {
        for(int j = 0; j <= s; j++) {
            int d = 0;
            scanf("%d", &d);
            if (d == 1) {
                struct point temp;
                temp.x = i;
                temp.y = j;
                map[t++] = temp;
            }
        }
    }
    int count = 0;
    int mapTreeCount, anchorTreeCount;
    for (int i = 0; i < n; i++) {
        struct point anchor = trees[i];
        mapTreeCount = 0;
        anchorTreeCount = 0;
        for (int i = 0; i < n; i++) {
            struct point p = trees[i];
            if (p.x-anchor.x <= s && p.y-anchor.y <= s && p.x >= anchor.x && p.y >= anchor.y) {
                anchorTreeCount += 1;
            }
        }
        for (int i = 0; i <= t; i++) {
            int x = anchor.x+map[i].x;
            int y = anchor.y+map[i].y;
            
            for (int j = 0; j < n; j++) {
                struct point p2 = trees[j];
                if (x == p2.x && y == p2.y) {
                    mapTreeCount += 1;
                    if (mapTreeCount == t && t == anchorTreeCount && anchor.x+s<=l && anchor.y+s<=l) {
                        count += 1;
                        break;
                    }
                }
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}
```

```c++
#include <iostream>
using namespace std;
cin >> n;
cout << n << endl;
coutn << n << " ";

char str[100];
cin.getline(str, 100);

#include <string>
string str;
getline(cin, str);
str.length();
str.size();
str[1];
str.c_str();
str = str1 + str2;

str.insert(3, str2);
str.erase(str.begin()+4);
str.clear();
str.substr(0, 5);
str.find(str2)
str.repplace(pos, len, str2)

#include <algorithm>
bool cmp(int a, int b) {
  return a > b;
}
sort(a, a+6);
sort(a, a+6, cmp);

int max = max(x, y);
int min = min(x, y);
int abs = abs(x);
swap(x, y);
reverse(a, a+4);
fill(a, a+5, 0);

#include <vector>
vector<int> vi;

for (int i = 1; i < 5; i++) {
  vi.push_back(i);
}
for (vector<int>::iterator it = vi.begin(); it != vi.end(); vi++) {
  cout << *it << endl;
}

vi.pop_back();
vi.size();
vi.clear();
vi.insert(vi.begin()+2, -1);
vi[0];
vi.erase(vi.begin()+3);

#include <set>

set<int> st;
st.insert(100);
set<int>::iterator it = st.find(2);
st.erase(st.find(2));
st.erase(100)
st.size();
st.clear();

#include <quene>
quene<int> q;
q.push(x);
q.front();
q.back();
q.pop();
q.empty() == true;
q.size();

priority_qunen<int> q;
q.push(x);
q.top();
q.pop();
q.empty();
q.size();

#include <stack>
stack<int> st;
st.push(1);
st.top();
st.pop();
st.empty();
st.size();

#include <map>

pair<int, int> p;
pair<int, int> p(2, 2);
p = make_pair(2, 2);
p.first = 2;
p.second = 2;
```
