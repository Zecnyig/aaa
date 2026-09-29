#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c = 0;
    int ans = 0;
    for (int i = 1; i < 10000; i++){
        for (int j = 0; j < i; j++){
            ans += i;
            c++;
            if (c == n) break;
        }
        if (c == n) break;
    }
    printf("%d\n", ans);
    return 0;
}