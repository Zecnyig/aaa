#include <iostream>
using namespace std;
int f(int n){
    int ans = 1;
    while (n - 1){
        ans *= n;
        n--;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    printf("%d\n", f(n));
    return 0;
}