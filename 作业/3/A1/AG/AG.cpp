#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    const int s = 25;
    float v = s * 3600.0 / t;
    printf("%.1f\n", v);
    if (v <= 100){
        cout << "Normal" << endl;
    }else if (v < 120){
        cout << "Speeding <20%" << endl;
    }else if (v < 150){
        cout << "Speeding 20%-50%" << endl;
    }else if (v < 170){
        cout << "Speeding 50%-70%" << endl;
    }else{
        cout << "Speeding >70%" << endl;
    }
    return 0;
}