#include <stdio.h>
int isPrime(int a);
int main() {
    int a;
    scanf("%d", &a);
    printf("%s\n", isPrime(a) ? "yes" : "no");
    return 0;
}
// TODO: 定义 isPrime 函数
int isPrime(int a){
    if (a == 1) return 0;
    for (int i = 2; i <= a / 2; i++){
        if (a % i == 0) return 0;
    }
    return 1;
}