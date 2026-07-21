#include <stdio.h>

struct Student {
    char id[20];
    char name[20];
    double s1, s2, s3;
};

struct Student getMaxAvgStu(struct Student *stu, int n) {
    int maxIndex = 0;
    double maxAvg = ((stu + 0)->s1 + (stu + 0)->s2 + (stu + 0)->s3) / 3.0;

    for (int i = 1; i < n; i++) {
        double avg = ((stu + i)->s1 + (stu + i)->s2 + (stu + i)->s3) / 3.0;
        if (avg > maxAvg) {
            maxAvg = avg;
            maxIndex = i;
        }
    }
    return *(stu + maxIndex);
}

int main() {
    int n;
    struct Student stus[10]; 
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf %lf %lf", stus[i].id, stus[i].name, &stus[i].s1, &stus[i].s2, &stus[i].s3);
    }

    struct Student res = getMaxAvgStu(stus, n);
    double avg = (res.s1 + res.s2 + res.s3) / 3.0;
    printf("%s %s %.2lf %.2lf %.2lf %.2lf\n", res.id, res.name, res.s1, res.s2, res.s3, avg);
    return 0;
}