#include <iostream>
#define PI 3.14159
using namespace std;
int main(){
    int R;
    cin >> R;
    printf("%.2f\n%.2f\n", PI * R * R, 2 * PI * R);
    return 0;
}