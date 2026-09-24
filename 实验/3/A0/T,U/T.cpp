#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char* days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("%s\n", days[n - 1]);
    return 0;
}