#include <stdio.h>
double average2(int a, int b);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.2f\n", average2(a, b));
    return 0;
}
// TODO: 定义 average2 函数
double average2(int a, int b){
    return (a + b) / 2.0;
}