#include <stdio.h>

int isGoodNumber(int n);

int main() {
    int a, b, cnt = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (isGoodNumber(i)) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

// TODO: 定义 isGoodNumber 函数
int isGoodNumber(int n){
    while (n){
        if (n % 100 == 62 || n % 10 == 4){
            return 0;
        }
        n /= 10;
    }
    return 1;
}