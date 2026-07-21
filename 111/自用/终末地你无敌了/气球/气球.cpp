#include"stdio.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>

const int x = 5;
const int y = 5;

struct Point
{
    int x, y, level;
};

struct Balloon
{
    int up;
};

void randomPermute(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    for (int i = n - 1; i > 0; i--)
    {
        int r = rand() % (i + 1);
        int temp = a[i];
        a[i] = a[r];
        a[r] = temp;
    }
}

int check(Point p[], int n, int b[], int j, int t[])
{
    //x
    int x = 0;
    for(int i = 0; i < n; i++){
        x += p[i].x * b[t[i]];
    }
    if (x != 0){
        return 0;
    }

    //y
    int y = 0;
    for(int i = 0; i < n; i++){
        y += p[i].y * b[t[i]];
    }
    if (y != 0){
        return 0;
    }
    return 1;

}

void print(Point p[], int n, int b[], int j, int t[]){
    int a[x][y] = {0};
    for(int i = 0; i < n; i++){
        a[p[i].x + 2][p[i].y + 2] = b[t[i]];
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}


int main(){
    srand((unsigned)time(NULL));
    
    Point p[x*y];

    //a
    int X, Y, level;
    int n = 0;
    printf("Ready\n");
    for(int i = 0; i < x*y; i++)
    {
        scanf("%d %d", &X, &Y);
        if(X == 325 && Y == 799)
        {
            break;
        }
        n++;
        p[i].x = X;
        p[i].y = Y;
        p[i].level = abs(X)>abs(Y)?abs(X):abs(Y);
    }

    if(n == 0)
    {
        printf("no point\n");
        return -1;
    }
    
    //b
    int b[x*y] = {0};
    int up = 0, num = 0;
    int j = -1;
    while(1)
    {
        scanf("%d %d", &up, &num);
        if(up == 325 && num == 799)
        {
            break;
        }
        for(int i = 0; i < num; i++)
        {
            j++;
            b[j] = up;
        }
    }

    if(j == -1)
    {
        printf("no balloon\n");
        return -1;
    }

    //c
    int count = 0;
    int t[325] = {0};
    int flag = 0;
    do 
    {
        randomPermute(t, n);
        count++;
        flag = check(p, n, b, j, t);
        //printf("%d\n", flag);
        print(p, n, b, j, t);
        printf("\n");
    } while (!flag);

    printf("count: %d\n", count);

    return 0;
}