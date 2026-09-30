#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int n;
    cin >> n;
    char c;
    int i = 0, t = 210;
    while (n){
        n--;
        cin >> i >> c;
        if (i >= t){
            printf("%d\n", k);
            break;
        }else{
            if (c == 'T'){
                k = k % 8 + 1;
            }
            t -= i;
        }
    }
    return 0;
}