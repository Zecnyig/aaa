#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n <= 5){
        cout << 2 << endl;
    }else if (n <= 10){
        cout << 3 << endl;
    }else if (n <= 16){
        cout << 4 << endl;
    }else{
        cout << 5 << endl;
    }
    return 0;
}