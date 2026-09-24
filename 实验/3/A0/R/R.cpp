#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n % 123 >= 97 && n % 123 <= 122){
        printf("%c\n", n % 123);
    }else if (n % 91 >= 65 && n % 91 <= 90){
        printf("%c\n", n % 91);
    }else{
        printf("*\n");
    }
    return 0;
}