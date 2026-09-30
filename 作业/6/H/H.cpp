#include <stdio.h>
int gcd(int a, int b);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    return 0;
}

// TODO: 定义 gcd 函数
int gcd(int a, int b){
    while (a && b){
        if (a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    return a + b;
}