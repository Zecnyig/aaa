#include <iostream>
using namespace std;
int main(){
    int x, y, z, q;
    cin >> x >> y >> z >> q;
    int p = 2 * x + 5 * y + 3 * z;
    if (p > q){
        printf("No\n%d\n", p - q);
    }else{
        printf("Yes\n%d\n", q - p);
    }
    return 0;
}