#include <iostream>
using namespace std;
int reverseNum(int n){
    int ans = 0;
    while (n){
        ans = ans * 10 + n % 10;
        n /= 10;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while (t){
        t--;
        int n;
        cin >> n;
        printf("%d\n", reverseNum(n));
    }
    return 0;
}