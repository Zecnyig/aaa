#include <iostream>
using namespace std;
int main(){
    int a, b, c, s;
    cin >> a >> b >> c;
    s = a + b + c;
    if (s >= 90){
        printf("A\n");
    }else if(s >= 80){
        printf("B\n");
    }else if (s >= 70){
        printf("C\n");
    }else if (s >= 60){
        printf("D\n");
    }else{
        printf("E\n");
    }
    return 0;
}