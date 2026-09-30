#include <iostream>
using namespace std;

int mul(int a, int b);
int main() {
    int a, b;
    cin >> a >> b;
    printf("%d\n", mul(a, b));
    return 0;
}
// TODO: 定义 mul 函数
int mul(int a, int b){
    return a * b;
}