#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    int *a;
    int i;
    printf("输入变量\n");
    scanf("%d", &number);
    // int a[number];
    a = (int *)malloc(number * sizeof(int));

    for (i = 0; i < number; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = number - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }

    free(a);//释放内存
    return 0;
}