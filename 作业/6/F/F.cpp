#include <stdio.h>
int min3(int a, int b, int c);
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", min3(a, b, c));
    return 0;
}
// TODO: 定义 min3 函数
int min3(int a, int b, int c){
    int m = a < b ? a : b;
    return m < c ? m : c;
}