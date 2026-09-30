#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
    for (int i = 2; i < n; i++){
        printf("*");
        for (int j = 2; j < n; j++){
            printf(" ");
        }
        printf("*\n");
    }
    for (int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
    return 0;
}