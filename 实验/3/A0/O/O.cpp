#include <iostream>
using namespace std;
int main(){
    float height, weight;
    cin >> height >> weight;
    float BMI = weight / (height * height);
    printf("%.1f\n", BMI);
    if (BMI < 18.5){
        cout << "Underweight" << endl;
    }else if (BMI < 25){
        cout << "Normal" << endl;
    }else if (BMI < 30){
        cout << "Overweight" << endl;
    }else if (BMI < 35){
        cout << "Obese" << endl;
    }else if (BMI < 40){
        cout << "Severely Obese" << endl;
    }else{
        cout << "Extremely Obese" << endl;
    }
    return 0;
}