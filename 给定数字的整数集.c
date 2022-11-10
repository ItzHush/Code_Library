#include <stdio.h>

int main()
{
    int a, i, j, k;
    int att = 0;

    scanf("%d", &a);
    for (i = a; i <= a + 3; i++)
    {
        for (j = a; j <= a + 3; j++)
        {
            for (k = a; k <= a + 3; k++)
            {
                if (i != j)
                {
                    if (j != k)
                    {
                        printf("%d%d%d", i, j, k);
                        att++;
                        if (att == 6)
                        {
                            printf("\n");
                            att = 0;
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                }
            }
        }
    }
}