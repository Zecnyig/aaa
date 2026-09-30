#include <stdio.h>

int digitCount(int n);

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("%d\n", digitCount(n));
    }
    return 0;
}

// TODO: 定义 digitCount 函数
int digitCount(int n){
    int ans = 0;
    while (n){
        ans++;
        n /= 10;
    }
    return ans;
}