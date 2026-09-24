#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char* ans;
    switch(n){
        case 2: ans = "no";break;
        case 4: ans = "no";break;
        case 6: ans = "no";break;
        default: ans = "yes";break;
    }
    cout << ans << endl;
    return 0;
}