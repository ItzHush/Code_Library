#include <stdio.h>

int main()
{
    int x, y, n;
    int j = 0;
    int p = 0;
    scanf("%d %d", &x, &y);
    while (x <= y)
    {
        int isprime = 1;

        for (n = 2; n < x; n++)
        {

            if (x % n == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            j++;
            p += x;
        }
        x++;
    }
    printf("%d个质数,和为%d\n", j, p);
    return 0;
}
