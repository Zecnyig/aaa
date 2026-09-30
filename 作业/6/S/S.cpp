#include <iostream>
using namespace std;
long long power(int a, int b){
    long long ans = a;
    if (b == 0){
        return 1;
    }
    while (b - 1){
        b--;
        ans *= a;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    int a, b;
    while (t){
        t--;
        cin >> a >> b;
        printf("%lld\n", power(a, b));
    }
    return 0;
}