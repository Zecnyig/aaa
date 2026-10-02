#include <stdio.h>
void greet(void);
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        greet();
    }
    return 0;
}
// TODO: 定义 greet 函数
void greet(void){
    printf("Hello, function!\n");
}