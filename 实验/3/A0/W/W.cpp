#include <iostream>
using namespace std;
int main(){
    int m;
    cin >> m;
    char* seasons[] = {"spring", "summer", "autumn", "winter"};
    printf("%s\n", seasons[(m + 9) % 12 / 3]);
    return 0;
}