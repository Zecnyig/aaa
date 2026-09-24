#include <iostream>
using namespace std;
int main(){
    int i;
    cin >> i;
    printf("%.2f\n", i > 5000 ? 0.1 *i - 500 : 0);
    return 0;
}