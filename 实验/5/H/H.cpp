#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans;
    for (int i = 1; i <= n;i++){
        ans = 0;
        for (int j = 1; j <= i / 2; j++){
            ans += i % j == 0 ? j : 0;
        }
        if (ans == i){
            printf("%d\n", i);
        }
    }
    return 0;
}