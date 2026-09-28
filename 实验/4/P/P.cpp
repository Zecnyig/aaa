#include <iostream>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    long long n = a * b;
    long long ans = 0;
    while (n > 0){
        ans *= 10;
        ans += n % 10;
        n /= 10;
    }
    printf("%lld\n", ans);
    return 0;
}