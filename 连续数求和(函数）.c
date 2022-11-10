#include <stdio.h>

void sum(int begin, int end)
{
    int i;
    int a = 0;
    for (i = begin; i <= end; i++)
    {
        a += i;
    }
    printf("%d到%d的和是%d\n", begin, end, a);
}
int main()
{
    int x, y;
    printf("please enter your nums\n");
    scanf("%d %d", &x, &y);
    sum(x, y);
    sum(25, 50);
    return 0;
}