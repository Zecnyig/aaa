#include <stdio.h>

int absInt(int x);

int main() {
    int n, x;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        printf("%d\n", absInt(x));
    }
    return 0;
}

// TODO: 定义 absInt 函数
int absInt(int x){
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}