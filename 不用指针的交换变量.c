#include <stdio.h>
#include <math.h>
int swap(int a, int b);
int num(int a, int b);
int i;
int main(void)
{
    int a = 1;
    int b = 6;
    a = swap(a, b);
    b = num(a, b);
    printf("a=%d,b=%d", a, b);
    return 0;
}

int swap(int a, int b)
{
    i = a;
    a = b;
    b = i;
    return a;
}
int num(int a, int b)
{
    b = i;
    return b;
}
