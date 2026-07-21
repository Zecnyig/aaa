#include"stdio.h"
#include"string.h"
int main(){
    char str[10], *s[10] = {"SQL", "hello", "bear", "zone"};
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        i++;
    }
    int c;
    for (int i = 0; i < 4; i++){
        if (strcmp(str, s[i]) > 0){
            c = i+1;
            continue;
        }
        int j = 3;
        while (j >= i){
            s[j + 1] = s[j];
            j--;
        }
        s[i] = str;
        c = i;
        break;
    }
    if (c == 4) {
        s[4] = str;
    }
    for (int i = 0; i < 5; i++){
        printf("%s  ", s[i]);
    }
    putchar('\n');
    return 0;
}