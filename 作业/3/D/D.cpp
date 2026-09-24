#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int max, min;
    if (a > b){
        max = a, min = b;
    }else{
        max = b, min = a;
    }
    max = max > c ? max : c;
    min = min < c ? min : c;
    printf ("%d %d %d\n", min, a + b + c - max - min, max);
    return 0;
}