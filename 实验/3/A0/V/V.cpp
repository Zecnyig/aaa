#include <iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cin >> a >> op >> b;
    switch (op){
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
    }
    return 0;
}