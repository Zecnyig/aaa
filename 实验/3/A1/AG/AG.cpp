#include <iostream>
using namespace std;
int main(){
    float miles;
    int wait;
    cin >> miles >> wait;
    float sum = 10;
    if (miles > 3 && miles <= 10){
        sum += (miles - 3) * 2;
    }else if (miles > 10){
        sum += (10 - 3) * 2 + (miles - 10) * 3;
    }
    sum += wait / 5 * 2;
    cout << (sum >= (int)sum + 0.5 ? (int)sum + 1 : (int)sum) << endl;
    return 0;
}