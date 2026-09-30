#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    long long m = a, n = b;
    while (a != 0 && b != 0){
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    printf("%d %lld\n", a + b, (m * n) / (a + b));
    return 0;
}