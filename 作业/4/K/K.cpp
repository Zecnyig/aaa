#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t, max = -10000, min = 10000;
    while (n){
        n--;
        cin >> t;
        max = max > t ? max : t;
        min = min < t ? min : t;
    }
    printf("%d %d\n", max, min);
    return 0;
}