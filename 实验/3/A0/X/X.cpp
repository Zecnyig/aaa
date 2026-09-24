#include <iostream>
using namespace std;
int main(){
    int year, mounth;
    cin >> year >> mounth;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        days[1] = 29;
    }
    cout << days[mounth - 1] << endl;
    return 0;
}