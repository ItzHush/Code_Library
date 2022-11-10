#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = 0;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }
    printf("最大值是%c", max);
    return 0;
}