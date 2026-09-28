#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 10;
    while (n >= 10){
        ans = 0;
        while (n > 0){
            ans += n % 10;
            n /= 10;
        }
        n = ans;
    }
    printf("%d\n", ans);
    return 0;
}