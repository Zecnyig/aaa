#include <iostream>
using namespace std;
int main(){
    int income;
    cin >> income;
    income -= 5000;
    float tax[] = {0.03, 0.1, 0.2};
    int interval[] = {3000, 12000};
    if (income <= 0){
        printf("0.00\n");
    }
    else if (income <= interval[0]){
        printf("%.2f\n", tax[0] * income);
    }
    else if (income <= interval[1]){
        printf("%.2f\n", tax[0] * interval[0] + tax[1] * (income - interval[0]));
    }
    else{
        printf("%.2f\n", tax[0] * interval[0] + tax[1] * (interval[1] - interval[0]) + tax[2] * (income - interval[1]));
    }
    return 0;
}