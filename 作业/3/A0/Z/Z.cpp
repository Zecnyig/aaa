#include <iostream>
using namespace std;
int main(){
    int w;
    cin >> w;
    if (w <= 3){
        cout << 10 << endl;
    }else if (w <= 10){
        cout << 10 + 2 * (w - 3) << endl;
    }else{
        cout << 10 + 14 + (w - 10) * 5 << endl;
    }
    return 0;
}