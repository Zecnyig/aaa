#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic(int n){
    int d = 1, temp = n;
    while (temp >= 10){
        temp /= 10;
        d++;
    }
    int sum = 0, t = n;
    int i;
    while (t > 0){
        i = 1;
        for (int j = 0; j < d; j++){
            i *= t % 10;
        }
        sum += i;
        t /= 10;
    }
    return sum == n;
}


void PrintN( int m, int n ){
    for (int i = m + 1; i < n; i++){
        if (narcissistic(i)){
            printf("%d\n", i);
        }
    }
}
