#include <stdio.h>
int main(void)
{

    int x = 0;
    int ret = 0;
    int digit = 0;
    printf("����������\n");
    scanf("%d", &x);
    while (x > 0)
    {
        digit = x % 10;
        printf("%d", digit);
        //ret = ret * 10 + digit;
        x /= 10;
    }
    // printf("������%d", ret);
    return 0;
}