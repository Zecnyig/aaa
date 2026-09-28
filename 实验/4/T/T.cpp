#include <iostream>
#define INT_MIN     (-2147483647 - 1)
using namespace std;
int main(){
    int t;
    int s[10] = {0};
    for (int i = 0; i < 10; i++){
        cin >> t;
        s[i] = t;
    }
    int max = INT_MIN;
    for (int i = 0; i < 10; i++){
        max = max > s[i] ? max : s[i];
    }
    printf("%d\n", max);
    return 0;

}