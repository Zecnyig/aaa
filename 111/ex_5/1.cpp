#include"stdio.h"

int main(){
    int a[10] = {0};
    int n;
    scanf("%d", &n);
    int nums[1000];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    int num;
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            a[0]++;
            continue;
        }
        num = nums[i];
        while(num > 0){
            a[num % 10]++;
            num /= 10;
        }
    }
    int max = 0;
    for(int i = 1; i < 10; i++){
        max = a[max] > a[i] ? max : i;
    }
    printf("%d:", a[max]);
    for(int i = 0; i < 10; i++){
        if(a[i] == a[max]){
            printf(" %d", i);
        }
    }
    return 0;
}