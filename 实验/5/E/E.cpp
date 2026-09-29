#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    printf("2");
    int flag = 1;
    for (int i = 3; i <= n; i++){
        flag = 1;
        for (int j = 2; j <= i / 2; j++){
            if (i % j == 0) flag = 0;
        }
        if (flag == 1) printf(" %d", i);
    }
    printf("\n");
    return 0;
}