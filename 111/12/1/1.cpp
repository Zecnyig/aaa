#include"stdio.h"
int main(){
    int n;
    scanf("%d", &n);
    char str[100];
    for (int i = 0; i < n; i++){
        scanf("%s", str);
        int count = 0;
        for (int j = 0; str[j] != '\0'; j++){
            count++;
        }
        int flag = 1;
        for (int j = 0; j < count / 2; j++){
            if (str[j] != str[count - 1 - j]){
                flag = 0;
                break;
            }
        }
        if (flag){
            printf("yes\n");
        } else {
            printf("no\n");
        }

    }
    return 0;
}