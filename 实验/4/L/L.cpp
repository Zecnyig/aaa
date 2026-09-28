#include <iostream>
using namespace std;
int main(){
    double x;
    int n;
    cin >> x >> n;
    double ans = 0;
    ans += x;
    for (int i = 1; i < n; i++){
        ans += x;
        x /= 2.0;
    }
    printf("%.2lf\n", ans);
    return 0;
}