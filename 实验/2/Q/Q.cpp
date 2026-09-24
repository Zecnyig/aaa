#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double R, X, P;
    cin >> R >> X >> P;
    printf("%.2f\n", pow(((100 + R) / 100), P) * X);
    return 0;
}