#include <stdio.h>

void f(int *p); //��������������Ҫ��������
void g(int k);

int main()
{

    int i = 6;
    printf("&i=%p\n", &i);
    f(&i);
    g(i);
    return 0;
}

void f(int *p)
{
    printf("p=%p\n", p);
    printf("*p=%d\n", *p);
    *p = 10; //�ı�i��ַ��ֵ
}

void g(int k)
{
    printf("k=%d\n", k);
}