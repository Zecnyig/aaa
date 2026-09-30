#include <iostream>
using namespace std;
int gcd(int a, int b){
    while (a && b){
        if (a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    return a + b;
}
int lcm(int a, int b){
    int n = a * b;
    while (a && b){
        if (a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    return n / (a + b);
}
int main(){
    int t;
    cin >> t;
    int a, b;
    while (t){
        t--;
        cin >> a >> b;
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }
    return 0;
}