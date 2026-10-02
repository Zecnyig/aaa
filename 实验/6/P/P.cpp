#include <iostream>
using namespace std;
int sumDigits(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++){
        ans += i % sumDigits(i) == 0 ? 1 : 0;
    }
    printf("%d\n", ans);
    return 0;
}