#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 0;
    int ans[100];
    while (n){
        ans[c] = n % 2;
        c++;
        n /= 2;
    }
    for (int i = c - 1; i >= 0; i--){
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}