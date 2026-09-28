#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 1;
    while (n > 0){
        ans *= n % 10;
        n /= 10;
    }
    printf("%d\n", ans);
    return 0;
}