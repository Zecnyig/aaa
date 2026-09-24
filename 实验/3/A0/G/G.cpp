#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c){
            printf("equilateral\n");
        }
        else if (a == b || a == c || b == c){
            printf("isosceles\n");
        }
        else{
            printf("scalene\n");
        }
    }
    else{
        printf("no\n");
    }
    return 0;
}