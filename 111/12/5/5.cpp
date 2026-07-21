#include"stdio.h"

int main(){
    int n;
    char str[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    scanf("%d", &n);
    int num;
    char output[5];
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        if (num == 0){
            printf("0\n");
            continue;
        }
        int j = 0;
        while (num > 0){
            output[j] = str[num % 16];
            num /= 16;
            j++;
        }
        for (int k = j - 1; k >= 0; k--){
            printf("%c", output[k]);
        }
        printf("\n");
    }
    return 0;
}