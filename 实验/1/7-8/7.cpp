#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i = n - 1; i > 0; i--){
        for (int j = i; j >1; j--){
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = 2; i < n; i++){
        for (int j = i; j >1; j--){
            printf(" ");
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}