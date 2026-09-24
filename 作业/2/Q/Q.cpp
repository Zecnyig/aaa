#include <iostream>
#define PI 3.14159
using namespace std;
int main(){
    int h, r;
    cin >> h >> r;
    cout << ((20000 / (h * PI * r * r)) == (int)(20000 / (h * PI * r * r)) ? (int)(20000 / (h * PI * r * r)) : (int)(20000 / (h * PI * r * r)) + 1) << endl;
    return 0;
}