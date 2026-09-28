#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    if (n == 0){
        ans = 1;
    }else{
        while (n != 0){
            ans++;
            n /= 10;
        }
    }
    printf("%d\n", ans);
    return 0;
}