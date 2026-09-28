#include <iostream>
using namespace std;
int main(){
    float k;
    cin >> k;
    float c, f;
    c = k - 273.15;
    f = c * 1.8 + 32;
    if (f > 212){
        printf("Temperature is too high!\n");
    }else{
        printf("%.2f %.2f\n", c, f);
    }
    return 0;
}