#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char* m[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%s\n", m[n - 1]);
    return 0;
}