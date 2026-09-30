#include <iostream>
using namespace std;
int countEvenDigits(int n){
    int ans = 0;
    if (n == 0) return 1;
    while (n){
        ans += n % 10 % 2 == 0 ? 1 : 0;
        n /= 10;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    int n;
    while (t){
        t--;
        cin >> n;
        printf("%d\n", countEvenDigits(n));
    }
    return 0;
}