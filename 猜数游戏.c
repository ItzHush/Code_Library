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
        printf("������һ������\n");
        scanf_s("%d", &guess);
        att++;
        if (guess > num)
        {
            printf("����������ִ���\n");
        }
        else if (guess < num)
        {
            printf("�����������С��\n");
        }
    }
    printf("�¶��ˣ�����%d,������%d��.\n", num, att);
    return 0;
}
