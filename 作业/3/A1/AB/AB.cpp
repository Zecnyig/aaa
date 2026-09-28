#include <iostream>
using namespace std;
int main(){
    int y, m, d;
    cin >> y >> m >> d;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
        days[2] = 29;
    }
    d += 1;
    if (d > days[m]){
        d -= days[m];
        m += 1;
    }
    if (m > 12){
        y += 1;
        m = 1;
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}