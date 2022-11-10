#include <stdio.h>
#include <stdlib.h>

int cmp (const void* a, const void* b)
{
    return *(int *)a - *(int *)b;//将void指针强制类型转换为int指针
}

int main()
{
    double arr[10] = {2.1, 6.5, 4.0, 5.1, 2.5, 4.1, 7.3, 9.5, 8.2, 0.9};
    for (int i = 0; i < 10; i++)
        printf("%lf ", arr[i]);       
    printf("\n");
    qsort(arr, 10, sizeof(int *), cmp);
    for (int i = 0; i < 10; i++)
        printf("%.1lf ", arr[i]);
}

