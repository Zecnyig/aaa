#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n / 2; i++){
        ans += n % i == 0 ? i : 0;
    }
    printf("%s\n", ans == n ? "yes" : "no");
    return 0;
}