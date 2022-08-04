#include <stdio.h>

int main()
{
    int t1;
    int minute;
    int t2;

    scanf("%d %d", &t1, &minute);

    int hour1 = t1 / 100;
    int minute1 = hour1 * 60 + t1 % 100;
    int minute2 = minute1 + minute;
    int hour2 = minute2 / 60;
    t2 = hour2 * 100 + minute2 % 60;

    printf("%d\n", t2);
}