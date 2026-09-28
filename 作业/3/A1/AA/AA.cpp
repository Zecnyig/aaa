#include <iostream>
using namespace std;
int main(){
    int p;
    cin >> p;
    if (p <= 100000){
        printf("%.2f\n", 0.1 * p);
    }else if (p <= 200000){
        printf("%.2f\n", 10000 + (p - 100000) * 0.08);
    }else if (p <= 400000){
        printf("%.2f\n", 10000 + 8000 + (p - 200000) * 0.05);
    }else if (p <= 600000){
        printf("%.2f\n", 10000 + 8000 + 10000 + (p - 400000) * 0.03);
    }else if (p <= 1000000){
        printf("%.2f\n", 10000 + 8000 + 10000 + 6000 + (p - 600000) * 0.02);
    }else{
        printf("%.2f\n", 10000 + 8000 + 10000 + 6000 + 8000 + (p - 1000000) * 0.01);
    } return 0;
}