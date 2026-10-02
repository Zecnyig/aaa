#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int y = 1970, m = 1, d = 1, hh = 0, mm = 0, ss = 0;
    while (n >= 365 * 24 * 60 * 60) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            if (n >= 366 * 24 * 60 * 60) {
                n -= 366 * 24 * 60 * 60;
                y++;
            } else {
                break;
            }
        } else {
            n -= 365 * 24 * 60 * 60;
            y++;
        }
    }
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        daysInMonth[1] = 29;
    }
    for (int i = 0; i < 12; i++) {
        if (n >= daysInMonth[i] * 24 * 60 * 60) {
            n -= daysInMonth[i] * 24 * 60 * 60;
            m++;
        } else {
            break;
        }
    }
    d += n / (24 * 60 * 60);
    n %= (24 * 60 * 60);
    hh += n / (60 * 60);
    n %= (60 * 60);
    mm += n / 60;
    n %= 60;
    ss += n;
    cout << y << "/" << m << "/" << d << " " << hh << ":" << mm << ":" << ss << endl;
}