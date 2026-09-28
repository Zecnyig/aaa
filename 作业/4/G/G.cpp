#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n >= 10){
        printf("%d ", n % 10);
        n /= 10;
    }
    printf("%d\n", n);
    return 0;
}