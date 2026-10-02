#include <stdio.h>
int add(int a, int b);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", add(a, b));
    return 0;
}
// TODO: 定义 add 函数
int add(int a, int b){
    return a + b;
}