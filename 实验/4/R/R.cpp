#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int r = 100;
    for (int i = 0; i < n; i++){
        ans += r;
        r += 50;
    }
    printf("%d\n", ans);
    return 0;
}