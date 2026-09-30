#include <iostream>
using namespace std;
int isPrime(int n){
    if (n == 1) return 0;
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (b - a + 1){
        ans += isPrime(b) ? b : 0;
        b--;
    }
    printf("%d\n", ans);
    return 0;
}