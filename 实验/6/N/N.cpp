#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b >> c;

    if (b * b - 4 * a * c < 0){
        printf("no\n");
    }else if (b * b - 4 * a * c == 0){
        printf("%.2lf\n", -b / 2 / a);
    }else{
    double ans1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double ans2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("%.2lf %.2lf\n", ans1, ans2);
    }
    return 0;
}