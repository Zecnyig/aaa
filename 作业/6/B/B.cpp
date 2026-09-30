#include <stdio.h>
int cube(int x);
int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", cube(a));
    return 0;
}
// TODO: 定义 cube 函数
int cube(int x){
    return x * x * x;
}