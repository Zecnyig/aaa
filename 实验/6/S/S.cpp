#include <stdio.h>

int isArmstrong(int n);

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("%s\n", isArmstrong(n) ? "T" : "F");
    }
    return 0;
}

// TODO: 定义 isArmstrong 函数
int isArmstrong(int n){
    int a = n, b = 0, d = 0;
    int t = n;
    
    while (t) {
        d++;
        t /= 10;
    }
    
    t = n;
    while (t) {
        int x = t % 10;
        int p = 1;
        for (int i = 0; i < d; i++) {
            p *= x;
        }
        b += p;
        t /= 10;
    }
    
    return b == a;
}