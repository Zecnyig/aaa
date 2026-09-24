#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    if (m <= 3){
        cout << 10 << endl;
    }else{
        cout << 10 + (m - 3) * 2 << endl;
    }
    return 0;
}