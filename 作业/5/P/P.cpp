#include <iostream>
using namespace std;

double sum(double* arr, int a, int b){
    double s = 0;
    for (int i = a; i <= b; i++){
        s += arr[i];
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    double* arr = new double[n];
    double ans = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            ans += sum(arr, j, i);
        }
    }
    printf("%.2lf\n", ans);
    delete[] arr;
    return 0;
}