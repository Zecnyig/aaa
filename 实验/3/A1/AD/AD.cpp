#include <iostream>
using namespace std;
int main(){
    int k;
    char* menu[] = { "[1] apples", "[2] pears", "[3] oranges", "[4] grapes", "[0] Exit" };
    float price[] = { 3.00, 2.50, 4.10, 10.20 };
    for (int i = 0; i < 5; i++){
        printf("%s\n", menu[i]);
    }
    cin >> k;
    if (k < 0 || k > 4){
        printf("price=0\n");
    }else if (k == 0){}
    else{
        printf("price=%.1f\n", price[k - 1]);
    }
    return 0;
}