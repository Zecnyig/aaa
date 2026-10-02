#include <stdio.h>
int sub(int a, int b);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", sub(a, b));
    }
    return 0;
}

// TODO: 定义 sub 函数
int sub(int a, int b){
    return a - b;
}