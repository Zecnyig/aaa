#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    x -= 14;
    int ans = 0;
    for (int i = 0; i <= x; i += 7){
        for (int j = 0; j <= x - i; j += 5){
            if ((x - i - j) % 2 == 0){
                ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}