#include <stdio.h>

int main(void)
{

    int att = 0;
    int a = 0;
    float total = 0;
    while (att < 10)
    {
        printf("请输入一个数字\n");
        scanf("%d", &a);
        total += a;
        att++;
    }
    printf("这10个数的平均数是%f", total / 10);
    return 0;
}