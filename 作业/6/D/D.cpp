#include <stdio.h>
int absInt(int x);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        printf("%d\n", absInt(x));
    }
    return 0;
}

// TODO: 定义 absInt 函数
int absInt(int x){
    return x < 0 ? -x : x;
}