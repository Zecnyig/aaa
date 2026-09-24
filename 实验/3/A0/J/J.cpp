#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int local = 5 * n, online = 11 + 3 * n;
    cout << (local < online ? "Local" : "Online") << endl;
    return 0;
}