#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOfO;
    int result = -1; //-1没人赢；1X赢；0O赢

    //读入矩阵
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    //检查行
    for (i = 0; i < size && result == -1; i++) //外循环检查每一行
    {
        numOfO = 0;
        numOfX = 0;
        for (j = 0; j < size; j++) //内循环检查这一行每一列
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

    //检查列与检查行类似
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
        if (board[i][i] == 1) //主对角线每个值是11，22，33...
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
        if (board[i][size - i - 1] == 1) //副对角线是所有的行数-所在的行数-1
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
