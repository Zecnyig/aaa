#include <iostream>
using namespace std;
int main(){
    int p;
    cin >> p;
    float rate[] = {1, 0.9, 0.8, 0.7};
    if (p < 100){
        printf("%.2f\n", rate[0] * p);
    }else if (p < 500){
        printf("%.2f\n", rate[1] * p);
    }
    else if (p < 1000){
        printf("%.2f\n", rate[2] * p);
    }
    else{
        printf("%.2f\n", rate[3] * p);
    }
    return 0;
}