#include <stdio.h>

int isOdd(int x);

int main() {
    int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        printf("%s\n", isOdd(x) ? "Odd" : "Even");
    }
    return 0;
}

// TODO: 定义 isOdd 函数
int isOdd(int x){
    return x % 2 != 0;
}