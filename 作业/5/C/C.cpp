#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 2;
    while (n > 1){
        while (n % i == 0){
            printf("%d", i);
            n = n / i;
            if (n != 1) printf(" ");
        }
        i++;
    }
    printf("\n");
    return 0;
}