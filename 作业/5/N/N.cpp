#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 3;
    while (n >= 0){
        n -= c;
        c += 2;
    }
    printf("%d\n", -n);
    return 0;
}