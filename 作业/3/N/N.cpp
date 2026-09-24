#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a >= b){
        printf("Congratulations\n");
    }else if (b - a <= 20){
        printf("100\n");
    }else if (b - a <= 30){
        printf("270\n");
    }else{
        printf("500\n");
    }
    return 0;
}