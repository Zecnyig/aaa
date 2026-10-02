#include <stdio.h>
double power(double x, int n);
int main() {
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%.2f\n", power(x, n));
    return 0;
}
// TODO: 定义 power 函数
double power(double x, int n){
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}