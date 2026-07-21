#include"stdio.h"

void print_space(int num){
    int space_num = 4;
    while (num>0){
        num/=10;
        space_num--;
    }
    for (int i = 0; i < space_num; i++){
        printf(" ");
    }
}


int main(){
    int n;
    int arr[13][13];
    while (1){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        arr[0][0] = 1;
        arr[1][0] = 1;
        arr[1][1] = 1;
        for (int i = 2; i < n; i++){
            arr[i][0] = 1;
            for (int j = 1; j < i; j++){
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            arr[i][i] = 1;
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                print_space(arr[i][j]);
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}