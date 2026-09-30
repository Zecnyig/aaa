#include <stdio.h>
int isNarcissus(int n);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", isNarcissus(n));
    }
    return 0;
}

// TODO: 定义 isNarcissus 函数
int isNarcissus(int n){
    int ans = 0;
    int t = n;
    while (n){
        ans = ans + (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    return t == ans;
}