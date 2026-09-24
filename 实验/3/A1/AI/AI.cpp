#include <iostream>
using namespace std;
int main(){
    int d;
    cin >> d;
    int a, b;
    a = d / 1.2;
    b = d / 3.0 + 50;
    if (a == b){
        printf("All\n");
    }else{
        cout << (a < b ? "Walk" : "Bike") << endl;
    }
    return 0;
}