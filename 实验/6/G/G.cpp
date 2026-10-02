#include <stdio.h>
int max3(int a, int b, int c);
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", max3(a, b, c));
    return 0;
}
// TODO: 定义 max3 函数
int max3(int a, int b, int c){
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}