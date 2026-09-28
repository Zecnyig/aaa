#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    switch(c){
        case 'A':
        printf("4\n");
        break;
        case 'B':
        printf("3\n");
        break;
        case 'C':
        printf("2\n");
        break;
        case 'D':
        printf("1\n");
        break;
        case 'F':
        printf("0\n");
        break;
    }
    return 0;
}