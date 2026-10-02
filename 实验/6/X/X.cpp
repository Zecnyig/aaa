#include <iostream>
using namespace std;
int isPerfect(int n){
    int a = 0;
    for (int i = 1; i <= n / 2; i++){
        a += n % i ? 0 : i;
    }
    return a == n;
}
int main(){
    int t;
    cin >> t;
    while (t){
        t--;
        int n;
        cin >> n;
        printf("%d\n", isPerfect(n));
    }
    return 0;
}