#include <stdio.h>
int main()
{
    const int max = 25;
    int i;
    int x;
    int prime[max];


    for (i = 0; i < max; i++)
    {
        prime[i] = 1; //将数组中所有项初始化为1
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
    } //将2的倍数数组转为0，再将3的倍数数组转为0，5的倍数，7的倍数……

    for (i = 2; i < max; i++)
    {
        if (prime[i])
        {
            printf("%d\t", i);
        }
    } //输出

    return 0;
}