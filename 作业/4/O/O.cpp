#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int t, n = b;
    while (b){
        b--;
        cin >> t;
        a += t;
    }
    printf("%d %d\n", a / n, a % n);
    return 0;
}