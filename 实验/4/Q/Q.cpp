#include <iostream>
using namespace std;
int main(){
    int t;
    int s[10] = {0};
    for (int i = 0; i < 10; i++){
        cin >> t;
        s[i] = t;
    }
    int max = 0, min = 100;
    float ans = 0;
    for (int i = 0; i < 10; i++){
        max = max > s[i] ? max : s[i];
        min = min < s[i] ? min : s[i];
        ans += s[i];
    }
    ans -= max + min;
    printf("%.3f\n", ans / 8.0);
    return 0;
}