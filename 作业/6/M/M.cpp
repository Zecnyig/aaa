#include <iostream>
using namespace std;
int isPrime(int n){
    if (n == 1) return 0;
    for (int i = 2; i <= n / 2; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int a, b;
    cin >> a >> b;
    int flag = 1;
    while (b - a + 1){
        if (isPrime(a) && isPrime(a % 1000) && isPrime(a % 100) && isPrime(a % 10)){
            printf("%d\n", a);
            flag = 0;
        }
        a++;
    }
    if (flag){
        printf("No Answer\n");
    }
    return 0;
}