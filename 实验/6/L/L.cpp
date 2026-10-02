#include <iostream>
using namespace std;
int f(int n){
    int x = 0;
    int a = n;
    while (n){
        int t = n % 10;
        x += t * t * t;
        n /= 10;
    }
    return x == a;
}
int main(){
    int a, b;
    cin >> a >> b;
    int flag = 1;
    for (int i = a; i <= b; i++){
        if (f(i)){
            flag = 0;
            printf("%d\n", i);
        }
    }
    if (flag) printf("None\n");
    return 0;
}