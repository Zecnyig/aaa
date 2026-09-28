#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    switch(c){
        case 'W':
        printf("up\n");
        break;
        case 'A':
        printf("left\n");
        break;
        case 'S':
        printf("down\n");
        break;
        case 'D':
        printf("right\n");
        break;
    }
    return 0;
}