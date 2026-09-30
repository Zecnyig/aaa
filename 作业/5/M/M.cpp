#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    float sum = 0;
    int c = 2;
    int day = 0;
    while (c <= n){
        day++;
        sum += 2.8 * c;
        c *= 2;
    }
    printf("%.2f\n", sum / day);
    return 0;
}