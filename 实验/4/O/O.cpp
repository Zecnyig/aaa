#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while (n != 1){
        if (n % 2 == 0){
            ans++;
            n /= 2;
        }else{
            ans++;
            n = (3 * n + 1) / 2;
        }
    }
    printf("%d\n", ans);
    return 0;
}