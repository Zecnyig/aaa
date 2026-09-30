#include <stdio.h>

int collatzLen(int n);

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", collatzLen(n));
    }
    return 0;
}

// TODO: 定义 collatzLen 函数
int collatzLen(int n){
    int ans = 0;
    while (n - 1){
        ans++;
        n = n % 2 == 0 ? n / 2 : 3 * n + 1;
    }
    return ans;
}