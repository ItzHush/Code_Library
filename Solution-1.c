#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a); // ‰»Îaµƒ÷µ
    printf("%d divisible by 2 and 3?%d\n", a % 2 == 0 && a % 3 == 0);
    printf("%d 2 or 3 only one, ?%d\n", a % 2 == 0 || a % 3 == 0);
    printf("2 or 3 only one, %d\n", (a % 2 != 0 && a % 3 == 0) || (a % 2 == 0 && a % 3 != 0));
    return 0;
}