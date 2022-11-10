#include <stdio.h>
int main()
{
    int x = 0;
    int cnt = 0;
    double sum = 0;
    int number[100];
    scanf("%d", &x);
    while (x != -1)
    {
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if (cnt > 0)
    {
        int i;
        double avg = sum / cnt;
        printf("%f\n", avg);
        for (i = 0; i < cnt; i++)
        {
            if (number[i] > avg)
            {
                printf("%d\t", number[i]);
            }
        }
    }
    return 0;
}