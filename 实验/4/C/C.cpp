#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0){
        ans *= 10;
        ans += n % 10;
        n /= 10;
    }
    printf("%d\n", ans);
    return 0;
}