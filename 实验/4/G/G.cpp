#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int flag = 1;
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0){
            flag = 0;
        }
    }
    if (n == 1) flag = 0;
    if (n == 2) flag = 1;
    if (flag){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}