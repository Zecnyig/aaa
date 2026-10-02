#include <iostream>
using namespace std;
int countDigits(int n){
    int ans = 0;
    if (n == 0){
        return 1;
    }
    while (n){
        ans++;
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
        printf("%d\n", countDigits(n));
    }
    return 0;

}