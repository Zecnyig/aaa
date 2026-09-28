#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    long long a, b, c;
    for (int i = 1; i <= t; i++){
        cin >> a >> b >> c;
        printf("Case #%d: ", i);
        printf("%s\n", a + b > c ? "true" : "false");
    }
    return 0;
}