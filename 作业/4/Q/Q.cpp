#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s[4] = {0};
    int t;
    while (n){
        n--;
        cin >> t;
        if (t >= 9000){
            s[0]++;
        }else if (t >= 7000){
            s[1]++;
        }else if (t >= 5000){
            s[2]++;
        }else{
            s[3]++;
        }
    }
    printf("%d %d %d %d\n", s[0], s[1], s[2], s[3]);
    return 0;
}