#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double ans = 0;
    double flag = 1;
    for (int i = 1; i <= n; i++){
        ans += flag / i;
        flag = -flag;
    }
    printf("%.6lf\n", ans);
    return 0;

}