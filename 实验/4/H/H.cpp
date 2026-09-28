#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0, n_t = n;
    while (n > 0){
        ans *= 10;
        ans += n % 10;
        n /= 10;
    }
    if (ans == n_t){
        printf("yes\n");
    }else{
        printf("no\n");
    }
    return 0;
}