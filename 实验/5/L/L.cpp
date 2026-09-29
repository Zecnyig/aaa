#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            printf("%c", (char)('A' + n - 1 - j));
        }
        printf("\n");
    }
    return 0;
}