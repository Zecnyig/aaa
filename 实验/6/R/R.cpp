#include <stdio.h>

int sum(int n);

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("%d\n", sum(n));
    }
    return 0;
}

// TODO: 定义 sum 函数
int sum(int n){
    int s = 0;
    while (n){
        s += n;
        n--;
    }
    return s;
}