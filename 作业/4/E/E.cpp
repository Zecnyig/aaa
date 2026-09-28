#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t;
    float ans = 0;
    for (int i = 0; i < n; i++){
        cin >> t;
        ans += t;
    }
    printf("%.2f\n", ans / n);
    return 0;
}