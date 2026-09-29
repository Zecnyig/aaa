#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i <= n; i += 50){
        for (int j = 0; j <= n - i; j += 20){
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}