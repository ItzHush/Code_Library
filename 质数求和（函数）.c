#include <stdio.h>

int sum(int a)
{
    int i;
    int prime = 1;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("%d������\n", a);
    }
    else
    {
        printf("%d��������\n", a);
    }
    return prime;
}
int main()
{
    int b;
    scanf("%d", &b);
    sum(b);
    return 0;
}