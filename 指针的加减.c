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
    char *p = ac; //*pָ������ac�ĵ�һ��
    char *p1 = &ac[5];
    printf("p = %p\n", p);
    printf("p + 1 = %p\n", p + 1);
    printf("*(p+1)= %d\n", *(p + 1)); // char����ռһ���ֽ�
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
    int *q = ai; //*pָ������ac�ĵ�һ��
    int *q1 = &ai[6];
    printf("q = %p\n", q);
    printf("q + 1 = %p\n", q + 1);
    printf("*(q+1)= %d\n", *(q + 1)); // int����ռ�����ֽ�
    printf("q1-q = %d\n", q1 - q);    //�����������֮�������ֽ�

    return 0;
}