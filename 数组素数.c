#include <stdio.h>
int main()
{
    const int max = 25;
    int i;
    int x;
    int prime[max];


    for (i = 0; i < max; i++)
    {
        prime[i] = 1; //���������������ʼ��Ϊ1
    }
    for (x = 2; x < max; x++)
    {
        if (prime[i])
        {
            for (i = 2; i * x < max; i++)
            {
                prime[i * x] = 0;
            }
        }
    } //��2�ı�������תΪ0���ٽ�3�ı�������תΪ0��5�ı�����7�ı�������

    for (i = 2; i < max; i++)
    {
        if (prime[i])
        {
            printf("%d\t", i);
        }
    } //���

    return 0;
}