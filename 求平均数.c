#include <stdio.h>

int main(void)
{

    int att = 0;
    int a = 0;
    float total = 0;
    while (att < 10)
    {
        printf("������һ������\n");
        scanf("%d", &a);
        total += a;
        att++;
    }
    printf("��10������ƽ������%f", total / 10);
    return 0;
}