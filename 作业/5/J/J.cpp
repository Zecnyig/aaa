#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%d", (i + j) % 2 == 0 ? 0 : 1);
            if (j <= n - 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}