#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 9; i++){
        printf("%d*%d=%d", 1, i, 1 * i);
        for (int j = 2; j <= i; j++){
            printf("\t%d*%d=%d", j, i, j * i);
        }
        printf("\n");
    }
    return 0;
}