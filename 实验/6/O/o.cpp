#include <iostream>
using namespace std;
int isPrime(int n){
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++){
        ans += isPrime(i) ? i : 0;
    }
    printf("%d\n", ans);
    return 0;
}