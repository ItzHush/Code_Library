#include <stdio.h>

void f(int *p); //函数声明，变量要声明类型
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
    *p = 10; //改变i地址的值
}

void g(int k)
{
    printf("k=%d\n", k);
}