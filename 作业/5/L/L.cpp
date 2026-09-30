#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans1 = 0, ans2 = 0;
    while (n){
        n--;
        int t;
        cin >> t;
        ans2 += t % 2 == 0 ? t : 0;
        ans1 += t % 2 == 1 ? t : 0;
    }
    printf("%d %d\n", ans1, ans2);
    return 0;
}