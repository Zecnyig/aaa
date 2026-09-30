#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int v = 1;
    for (int i = 1; i <= n; i++){
        ans = (ans + v) % 10000;
        v += 2;
    }
    printf("%d\n", ans);
    return 0;
}