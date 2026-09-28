#include <iostream>
using namespace std;
int main(){
    int w;
    char y;
    cin >> w >> y;
    int ans = y == 'y'? 5 : 0;
    ans += 8;
    if (w > 1000){
        ans += (w % 500 == 0 ? 4 * (w - 1000) / 500 : 4 * ((w - 500) / 500));
    }
    printf("%d\n", ans);
    return 0;
    
}