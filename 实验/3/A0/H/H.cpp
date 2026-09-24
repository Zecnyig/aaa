#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if (x < 0){
        cout << x * x << endl;
    }
    else if (x < 10){
        cout << 2 * x << endl;
    }
    else{
        cout << x + 100 << endl;
    }
    return 0;
}