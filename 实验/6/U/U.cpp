#include <iostream>
using namespace std;
long long power(int x, int n){
    long long ans = 1;
    while (n){
        n--;
        ans *= x;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while (t){
        t--;
        int x, n;
        cin >> x >> n;
        printf("%lld\n", power(x, n));
    }
    return 0;
}