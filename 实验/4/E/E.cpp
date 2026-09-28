#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++){
        ans += i;
    }
    printf("%d\n", ans);
    return 0;
}