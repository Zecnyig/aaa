#include"stdio.h"
int main(){
    int m;
    scanf("%d", &m);
    double arr[10][10];
    double num;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<m;j++){
            scanf("%lf", &num);
            arr[i][j] = num;
        }
    }
    double sum = 0;
    for(int i = 0;i<m;i++){
        for(int j = m-1;j>=i;j--){
            sum += arr[i][j];
        }
    }
    printf("%.2lf", sum);
    return 0;
}