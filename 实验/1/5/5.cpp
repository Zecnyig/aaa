#include <iostream>
using namespace std;
int main(){
    for (int i = 3; i >= 0; i--){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        printf("@@@@\n");
    }
    return 0;
}