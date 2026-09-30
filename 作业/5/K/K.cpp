#include <iostream>
using namespace std;
int f(int f){
    return (int)((5.0 / 9.0) * (f - 32));
}
int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i += 20){
        printf("%d    %d\n", i, f(i));
    }
    return 0;
}