#include <stdio.h>
int sumOfDivisors(int n);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", sumOfDivisors(n));
    }
    return 0;
}

// TODO
int sumOfDivisors(int n){
    int ans = 0;
    for (int i = 1; i <= n / 2; i++){
        ans += n % i == 0 ? i : 0;
    }
    return ans;
}