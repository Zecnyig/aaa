#include <stdio.h>
int sumDigits(int n);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", sumDigits(n));
    }
    return 0;
}

// TODO: 定义 sumDigits 函数
int sumDigits(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}