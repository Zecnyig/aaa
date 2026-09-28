#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a, n;
    cin >> a >> n;
    int ans = 0;
    while (a > 0){
        ans += pow(a % 10, n);
        a /= 10;
    }
    printf("%d\n", ans);
    return 0;
}