#include <iostream>
using namespace std;
int main(){
    int a, b ,c, k;
    cin >> a >> b >> c >> k;
    if ((a + b + c) % k == 0){
        printf("%d\n", (a + b + c) / k);
    }else{
        printf("%d\n", (a + b + c) / k + 1);
    }
    return 0;
}