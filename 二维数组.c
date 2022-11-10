#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOfO;
    int result = -1; //-1û����Ӯ�� 0OӮ�� 1XӮ

    //�������
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    //�жϻ�ʤ����
    for (i = 0; i < size && result == -1; i++)
    {
        numOfO = 0;
        numOfX = 0;
        for (j = 0; j < size; j++)
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
        if (board[i][i] == 1)
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
        if (board[i][size - i - 1] == 1)
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
        printf("XӮ��");
    }
    else if (result == 0)
    {
        printf("OӮ��");
    }
    else if (result == -1)
    {
        printf("no");
    }
    return 0;
}