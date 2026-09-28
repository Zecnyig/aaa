#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    if (n <= 10){
        sum = 2 * n;
    }else if (n <= 20){
        sum = 20 + (n-10)*4;
    }else{
        sum = 20 + 40 + (n - 20) * 6;
    }
    printf("%d\n", sum);
    return 0;
}