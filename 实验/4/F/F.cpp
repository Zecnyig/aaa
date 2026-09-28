#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a > b){
        int t = a;
        a = b;
        b = t;
    }
    int max = 1;
    for (int i = 2; i <= a / 2; i++){
        if (a % i == 0 && b % i == 0){
            max = i;
        }
    }
    printf("%d\n", max);
    return 0;
}