#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 1;
    while (!(ans % 3 == a && ans % 5 == b && ans % 7 == c)){
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}