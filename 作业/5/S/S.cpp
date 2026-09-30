#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i;
    int a[3] = {0};
    while (n){
        n--;
        cin >> i;
        switch (i){
            case 1:
            a[0] += 1;
            break;
            case 5:
            a[1] += 1;
            break;
            case 10:
            a[2] += 1;
            break;
        }
    }
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}