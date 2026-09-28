#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    if (c >= '2' && c <= '9'){
        printf("%c\n", c);
    }
    switch (c)
    {
    case 'A':
        printf("1\n");
        break;
    case '0':
        printf("10\n");
        break;
    case 'J':
        printf("11\n");
        break;
    case 'Q':
        printf("12\n");
        break;
    case 'K':
        printf("13\n");
        break;
    default:
        break;
    }
    return 0;
}