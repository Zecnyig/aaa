#include <iostream>
using namespace std;
long long sumSquares(int n){
    int sum = 0;
    while (n){
        sum += n * n;
        n--;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    int n;
    while (t){
        t--;
        cin >> n;
        printf("%lld\n", sumSquares(n));
    }
    return 0;
}