#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    float s1 = 0, s2 = 0;
    int n1 = 0, n2 = 0;
    for (int i = 1; i <= n; i++){
        if (i % k == 0){
            s1 += i;
            n1++;
        }else{
            s2 += i;
            n2++;
        }
    }
    printf("%.1f %.1f\n", s1 / n1, s2 / n2);
    return 0;
}