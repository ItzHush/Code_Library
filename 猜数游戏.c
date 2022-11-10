#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int att = 0;
    int guess = 0;

    while (guess != num)
    {
        printf("请输入一个数字\n");
        scanf_s("%d", &guess);
        att++;
        if (guess > num)
        {
            printf("你输入的数字大了\n");
        }
        else if (guess < num)
        {
            printf("你输入的数字小了\n");
        }
    }
    printf("猜对了，答案是%d,你用了%d次.\n", num, att);
    return 0;
}
