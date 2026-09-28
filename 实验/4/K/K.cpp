#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long ans = 0;
    int t = 1;
    for (int i = 1; i <= n; i++){
        t *= i;
        ans += t;
    }
    printf("%lld\n", ans);
    return 0;
}