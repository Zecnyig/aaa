#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 1;
    while (n){
        ans *= n;
        n--;
    }
    printf("%d\n", ans);
    return 0;
}