#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    for (int x = 0; x <= m; x++){
        if (2 * x + 4 * (35 - x) == n)
        {
            printf("%d %d", x, m - x);
            goto out;
        }            
    }
    printf("no answer");    
    out:
    return 0;
}