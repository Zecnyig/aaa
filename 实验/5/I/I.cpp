#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n; i += 5){
        for (int j = 0; j <= n - i; j += 3){
            if (i / 5 + j / 3 + 3 * (n - i - j) == n){
                printf("%d %d %d\n", i / 5, j / 3, 3 * (n - i - j));
            }
        }
    }
    return 0;
}