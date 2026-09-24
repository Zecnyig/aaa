#include <iostream>
using namespace std;
int main(){
    float a[3] = {0.4463, 0.4663, 0.5663};
    int n;
    cin >> n;
    float sum = 0;
    if (n <= 150){
        sum = n * a[0];
    }else if (n <= 400){
        sum = 150 * a[0] + (n - 150) * a[1];
    }else{
        sum = 150 * a[0] + 250 * a[1] + (n - 400) * a[2];
    }
    printf("%.1f\n", sum);
    return 0;
}