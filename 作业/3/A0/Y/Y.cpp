#include <iostream>
using namespace std;
int main(){
    float t;
    cin >> t;
    if (t < 36){
        cout << "low" << endl;
    }else if (t <= 37.2){
        cout << "normal" << endl;
    }else if (t <= 38.5){
        cout << "low-fever" << endl;
    }else{
        cout << "high-fever" << endl;
    }
    return 0;
}