#include <stdio.h>
long long factorial(int n);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", factorial(n));
    }
    return 0;
}

// TODO: 定义 factorial 函数
long long factorial(int n){
    int ans = 1;
    while (n){
        ans *= n;
        n--;
    }
    return ans;
}