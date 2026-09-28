#include <iostream>
using namespace std;
int main(){
    int h, m, s;
    char c;
    cin >> h >> m >> s >> c;
    int ans = 0;
    if (c == 'P'){
        ans += 12 * 3600;
    }
    ans += h * 3600 + m * 60 + s;
    printf("%d\n", ans);
    return 0;
}