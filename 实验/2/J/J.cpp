#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    printf("%d---%d---%d---%d---%d\n", n/10000, n/1000%10, n/100%10, n/10%10, n%10);
    return 0;
}