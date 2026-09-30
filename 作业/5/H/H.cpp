#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int o = 0;
    for (int i = 1; i <= n; i++){
        int t = i;
        int ans = 0;
        while (t){
            ans += t % 10;
            t /= 10;
        }
        if (ans == k){
            o++;
        }
    }
    printf("%d\n", o);
    return 0;
}