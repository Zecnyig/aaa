#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[5] = {-1, -1, -1,-1, -1};
    int flag = 1;
    int c = 0;
    while (n){
        n--;
        int num;
        cin >> num;
        switch (num % 5){
            case 0:
            if (num % 2 == 0){
                if (a[0] == -1){
                    a[0] = 0;
                }
                a[0] += num;
            }
            break;

            case 1:
            if (a[1] == -1){
                a[1] = 0;
            }
            a[1] += flag * num;
            flag = -flag;
            break;

            case 2:
            if (a[2] == -1){
                a[2] = 0;
            }
            a[2]++;
            break;

            case 3:
            if (a[3] == -1){
                a[3] = 0;
            }
            c++;
            a[3] += num;
            break;

            case 4:
            if (a[4] == -1){
                a[4] = 0;
            }
            a[4] = a[4] > num ? a[4] : num;
            break;
        }
    }


    for (int i = 0; i < 5; i++){
        if (a[i] == -1){
            printf("N");
        }else{
            switch (i)
            {
            case 3:
                printf("%.1f", a[3] / (float)c);
                break;
            
            default:
                printf("%d", a[i]);
                break;
            }
        }

        if (i < 4){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}