#include <iostream>
using namespace std;
int main(){
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}