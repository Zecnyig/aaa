#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    n -= 1;
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y = 1777, m = 4, d = 30;
    while (n >= 365){
        if ((y + 1) % 400 == 0 || ((y + 1) % 4 == 0 && (y + 1) % 100 != 0)){
            if (n >= 366){
                n -= 366;
            }else{
                break;
            }
        }else{
            n -= 365;
        }
        y++;
    }
    if (n == 1){
        m = 5;
        d = 1;
    }else{
        n -= 1;
        m = 5;
        d = 1;
        while (n >= days[m]){
            if (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) && n >= 29){
                n -= 29;
                m++;
                continue;
            }
            n -= days[m];
            m++;
            if (m == 13){
                y++;
                m -= 12;
            }
        }

        d += n;
        printf("%d-", y);
        if (m < 10){
            printf("0");
        }
        printf("%d-", m);
        if (d < 10){
            printf("0");
        }
        printf("%d\n", d);
        return 0;
    }
}