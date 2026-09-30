#include <stdio.h>
int lcm(int a, int b);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", lcm(a, b));
    return 0;
}
// TODO: 定义 lcm 函数
int lcm(int a, int b){
    int n = a * b;
    while (a && b){
        if (a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    return n / (a + b);
}