#include <stdio.h>
#include <math.h>
int swap(int a);

int main()
{
    int c;
    int i = 5;
    c = swap(i); //交还回去的变量需要被赋予到一个值身上
    printf("%d", c);

    return 0;
}

int swap(int a)
{
    a++;
    printf("a+1=%d\n", a);
    ;
    return a;
}