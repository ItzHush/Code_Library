#include <stdio.h>
int main()
{
    // max1Ϊ������max2Ϊ����
    int n, k, num, max1 = 0, max2 = 0;
    scanf("%d", &n); //�����������뼸�����ݵ�
    int arr[1001] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &k); //�����һ�е�����
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &num);
            arr[num]++; //ͳ�ƴ�����ͬ�������ֵĴ�����
        }
    }
    // ������ִ����������ݣ�����������������
    for (int i = 0; i < 1001; i++)
    {
        if (arr[i] >= max1)
        {
            max1 = arr[i];
            max2 = i;
        }
    }
    printf("%d %d", max2, max1);
    return 0;
}
