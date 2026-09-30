#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double ans = 0;
    long long a = 1;
    for (int i = 1; i <= n; i++){
        a *= i;
        ans += 1.0 / a;
    }
    printf("%.6lf\n", ans);
    return 0;
}