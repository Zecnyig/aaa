#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n / 2; i++){
        if (n % i == 0) ans++;
    }
    printf("%d\n", ans);
    return 0;
}