#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z'){
        printf("%c\n", c + 32);
    }else{
        printf("%c\n", c);
    }
    return 0;
}