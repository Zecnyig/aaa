#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z'){
        c = (char)(c - 32);
    }
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
        default:
        printf("error\n");
        break;
    }
    return 0;
}