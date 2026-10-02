#include <stdio.h>
int square(int x);
int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", square(a));
    return 0;
}
// TODO: 定义 square 函数
int square(int x){
    return x * x;
}