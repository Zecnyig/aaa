#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int t;
    int s = 1;
    while (n){
        n--;
        cin >> t;
        s = (s * t) % 1000;
    }
    printf("%d\n", s);
    return 0;
}