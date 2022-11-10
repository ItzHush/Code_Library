#include <stdio.h>
int main(void)
{
    char ac[] = {0,
                 1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7,
                 8,
                 9};
    char *p = ac; //*p指向数组ac的第一项
    char *p1 = &ac[5];
    printf("p = %p\n", p);
    printf("p + 1 = %p\n", p + 1);
    printf("*(p+1)= %d\n", *(p + 1)); // char整数占一个字节
    printf("p1 - p = %d\n", p1 - p);

    int ai[] = {0,
                1,
                2,
                3,
                4,
                5,
                6,
                7,
                8,
                9};
    int *q = ai; //*p指向数组ac的第一项
    int *q1 = &ai[6];
    printf("q = %p\n", q);
    printf("q + 1 = %p\n", q + 1);
    printf("*(q+1)= %d\n", *(q + 1)); // int整数占两个字节
    printf("q1-q = %d\n", q1 - q);    //输出的是两个之间相差的字节

    return 0;
}