#include <iostream>
using namespace std;
int main(){
    int money = 0;
    int out = 0;
    int a = 0;
    for (int i = 1; i <= 12; i++){
        cin >> out;
        money = money + 300 - out;
        if (money < 0){
            printf("-%d\n", i);
            break;
        }
        if (money >= 100){
            a += money / 100 * 100;
            money %= 100;
        }
    }
    if (money >= 0) printf("%.0f\n", money + a * 1.2);
    return 0;
}