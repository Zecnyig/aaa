#include <iostream>
using namespace std;
int countMultiples(int n, int k){
    int ans = 0;
    while (n){
        ans += n % k == 0;
        n--;
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    int n, k;
    while (t){
        t--;
        cin >> n >> k;
        printf("%d\n", countMultiples(n, k));
    }
    return 0;
}