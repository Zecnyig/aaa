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
        if (t < 60){
            s[3]++;
        }else if (t < 80){
            s[2]++;
        }else if (t < 90){
            s[1]++;
        }else{
            s[0]++;
        }
    }
    printf("Excellent %d\nGood %d\nMedium %d\nPoor %d\n", s[0], s[1], s[2],s[3]);
    return 0;
}