#include"stdio.h"

void swap(char *a, char *b){
    char temp[100];
    int i = 0;
    while (a[i] != '\0'){
        temp[i] = a[i];
        i++;
    }
    temp[i] = '\0';
    i = 0;
    while (b[i] != '\0'){
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
    i = 0;
    while (temp[i] != '\0'){
        b[i] = temp[i];
        i++;
    }
    b[i] = '\0';
}

bool compare(char *a, char *b){
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0'){
        if (a[i] > b[i]){
            return true;
        } else if (a[i] < b[i]){
            return false;
        }
        i++;
    }
    if (a[i] == '\0'){
        return false;
    }
    return true;
}

int main(){
    char str[10][100];
    int n = 0;
    for (int i = 0; i < 10; i++){
        fgets(str[i], 100, stdin);
        if (str[i][0] == '\n'){
            break;
        }
        int j = 0;
        while (str[i][j] != '\0'){
            if (str[i][j] == '\n'){
                str[i][j] = '\0';
                break;
            }
            j++;
        }
        n++;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (compare(str[i], str[j])){
                swap(str[i], str[j]);
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%s\n", str[i]);
    }
    return 0;
}