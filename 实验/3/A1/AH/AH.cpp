#include <iostream>
using namespace std;
int main(){
    int Y, S, E, J;
    cin >> Y >> S >> E >> J;
    if (Y + S + E + J >= 360){
        printf("A\n");
    }else if (Y + S + E >= 240 && J > 90){
        printf("B\n");
    }else if ((Y == 100 || S == 100 || E == 100 || J == 100) && Y >= 60 && S >= 60 && E >= 60 && J >= 60){
        printf("C\n");
    }else{
        printf("NO\n");
    }
    return 0;
}