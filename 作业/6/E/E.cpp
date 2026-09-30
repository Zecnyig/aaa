#include <stdio.h>

int isPositive(int x);

int main() {
    int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        printf("%d\n", isPositive(x));
    }
    return 0;
}

// TODO: 定义 isPositive 函数
int isPositive(int x){
    if (x == 0){
        return 0;
    }else if (x > 0){
        return 1;
    }
    return -1;
}