#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf("2");
            if (j < n - 1){
                printf(" ");
            }
        }
        printf("1");
        if (i < n - 1){
            printf(" ");
        }
        for (int j = n - 1; j > i; j--){
            printf("0");
            if (j > i + 1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}