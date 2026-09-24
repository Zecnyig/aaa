#include <iostream>
using namespace std;
int main(){
    int s, v;
    cin >> s >> v;
    int m = 10;
    m += (s % v == 0 ? s / v : s / v + 1);
    int h = m / 60;
    m %= 60;
    if (m == 0){
        if (h > 8){
            printf("%d:00\n", 32 - h);
        }else{
            printf("0%d:00\n", 8 - h);
        }
    }else{
        if (h > 7){
            printf("%d:", 31 - h);
        }else{
            printf("0%d:", 7 - h);
        }
        if (m > 50){
            printf("0%d\n", 60 - m);
        }else{
            printf("%d\n", 60-m);
        }
    }
    return 0;
}