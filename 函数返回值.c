#include <stdio.h>
#include <math.h>
int swap(int a);

int main()
{
    int c;
    int i = 5;
    c = swap(i); //������ȥ�ı�����Ҫ�����赽һ��ֵ����
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