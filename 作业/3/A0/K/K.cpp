#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (abs(n) % 10 == 4){
        printf("no\n");
    }else{
        printf("yes\n");
    }
    return 0;
}