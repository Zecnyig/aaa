#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if (a + b < 10){
        printf("water\n");
    }else if (a > b){
        printf("tree\n");
    }else{
        printf("tea\n");
    }
    return 0;
}