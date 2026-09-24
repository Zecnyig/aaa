#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n > 0){
        printf("positive\n");
    }
    else if (n < 0){
        printf("negative\n");
    }
    else{
        printf("zero\n");
    }
    return 0;
}