#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOfO;
    int result = -1; //-1没有人赢， 0O赢， 1X赢

    //读入矩阵
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    //判断获胜条件
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

    //检查行
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
    //检查对角线
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
        printf("X赢了");
    }
    else if (result == 0)
    {
        printf("O赢了");
    }
    else if (result == -1)
    {
        printf("no");
    }
    return 0;
}