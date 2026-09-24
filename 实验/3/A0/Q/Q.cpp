#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << (pow(n/100, 3) + pow(n/10%10, 3) + pow(n%10, 3) == n ? "YES" : "NO") << endl;
    return 0;
}