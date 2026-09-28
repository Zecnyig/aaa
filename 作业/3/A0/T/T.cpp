#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    if (n >= a && n <= b){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}