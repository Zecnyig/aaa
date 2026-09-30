#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while (n){
        ans += n * n * n;
        n--;
    }
    printf("%d\n", ans);
    return 0;
}