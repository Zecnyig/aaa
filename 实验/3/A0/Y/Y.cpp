#include <iostream>
using namespace std;
int main(){
    int q;
    cin >> q;
    float price[] = {0.5, 0.6, 0.8};
    if (q <= 200){
        printf("%.2f\n", price[0] * q);
    }
    else if (q <= 400){
        printf("%.2f\n", price[0] * 200 + price[1] * (q - 200));
    }
    else{
        printf("%.2f\n", price[0] * 200 + price[1] * 200 + price[2] * (q - 400));
    }
    return 0;
}