#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        for (int j = i; j < n; j++){
            printf("%c", (char)('A' + j));
        }
        for (int j = n - 2; j >=i; j--){
            printf("%c", (char)('A' + j));
        }
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 0; i--){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        for (int j = i; j < n; j++){
            printf("%c", (char)('A' + j));
        }
        for (int j = n - 2; j >=i; j--){
            printf("%c", (char)('A' + j));
        }
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}