#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n < 100){
        printf("%d\n", n);
    }else if (n < 150){
        printf("%d\n", n - 10);
    }else if (n < 200){
        printf("%d\n", n - 25);
    }else if (n < 300){
        printf("%d\n", n - 45);
    }else{
        printf("%d\n", n - 75);
    }
    return 0;
}