#include <stdio.h>
int isPalindrome(int n);
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", isPalindrome(n));
    }
    return 0;
}

// TODO
int isPalindrome(int n){
    int a = n;
    int b = 0;
    while (n > 0) {
        b = b * 10 + n % 10;
        n /= 10;
    }
    return a == b;
}