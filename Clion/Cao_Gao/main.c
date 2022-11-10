#include <stdio.h>
int main()
{
    int a, b, c, d, p, n;
    for (p = 1000; p <= 1111; p++)
    {
        a = p / 1000; 
        b = (p % 1000) / 100;
        c = (p / 10) % 10;
        d = p % 10;
        n = 1000 * d + 100 * c + 10 * b + a;
        if (9 * p == n)
        {
            printf("%d", p);
        }
    }

    return 0;
}