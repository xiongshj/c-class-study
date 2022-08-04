#include <stdio.h>

int main()
{ 
    int input;
    scanf("%d", &input);

    int a;
    int b;
    int c;
    a = input / 100;
    c = input % 10;
    b = (input % 100) / 10;

    int output = c * 100 + b * 10 + a;
    printf("%d\n", output);

    return 0;
}