#include <iostream>
using namespace std;
int main(){
    int h, f;
    cin >> h >> f;
    int flag = 1;
    for (int i = 0; i < h; i++){
        if (2 * i + 4 * (h - i) == f){
            printf("%d %d\n", i, h - i);
            flag = 0;
        }
    }
    if (flag){
        printf("no\n");
    }
    return 0;
}