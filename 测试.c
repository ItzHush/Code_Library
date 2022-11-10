#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOfO;
    int result = -1; //-1û��Ӯ��1XӮ��0OӮ

    //�������
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    //�����
    for (i = 0; i < size && result == -1; i++) //��ѭ�����ÿһ��
    {
        numOfO = 0;
        numOfX = 0;
        for (j = 0; j < size; j++) //��ѭ�������һ��ÿһ��
        {
            if (board[i][j] == 1)
            {
                numOfX++;
            }
            else
            {
                numOfO++;
            }
        }
        if (numOfX == size)
        {
            result = 0;
        }
        else if (numOfO == size)
        {
            result = 1;
        }
    }

    //���������������
    //�����
    for (j = 0; j < size && result == -1; j++)
    {
        numOfO = 0;
        numOfX = 0;
        for (i = 0; i < size; i++)
        {
            if (board[i][j] == 1)
            {
                numOfX++;
            }
            else
            {
                numOfO++;
            }
        }
        if (numOfX == size)
        {
            result = 0;
        }
        else if (numOfO == size)
        {
            result = 1;
        }
    }

    //���Խ���
    numOfO = numOfX = 0;
    for (i = 0; i < size; i++)
    {
        if (board[i][i] == 1) //���Խ���ÿ��ֵ��11��22��33...
        {
            numOfX++;
        }
        else
        {
            numOfO++;
        }
        if (numOfX == size)
        {
            result = 0;
        }
        else if (numOfO == size)
        {
            result = 1;
        }
    }

    numOfO = numOfX = 0;
    for (i = 0; i < size; i++)
    {
        if (board[i][size - i - 1] == 1) //���Խ��������е�����-���ڵ�����-1
        {
            numOfX++;
        }
        else
        {
            numOfO++;
        }
        if (numOfX == size)
        {
            result = 0;
        }
        else if (numOfO == size)
        {
            result = 1;
        }
    }
    if (result == 1)
    {
        printf("X");
    }
    else if (result == 0)
    {
        printf("O");
    }
    else if (result == -1)
    {
        printf("no");
    }
    return 0;
}
