#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[50] = {0, 1, 1};
    for (int i = 3; i <= n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%d\n", a[n]);
    return 0;
}