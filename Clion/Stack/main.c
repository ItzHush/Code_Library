#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int *Array;
    int capacity;
    int top;//表示栈顶位置
};

typedef struct Stack * ArrayStuck;

_Bool initStuck(ArrayStuck list)
{
    list->Array = malloc(sizeof(int) * 10);
    if(list->Array == NULL) return 0;
    list->capacity = 10;
    list->top = -1;//压栈，必须先把栈顶标志加一之后才能写入，你要弹栈需要先读出再把栈顶标志减一。
                   //那么，栈为空的时候标志肯定不能是0，因为它标志着栈顶元素是数组的第一个值，这样代表栈里是有一个元素的。
                   //所以，top是-1的时候它才是空栈，写入的时候要先加一，指向数组第一个空间了才能写 。
    return 1;
}

_Bool pushStack(ArrayStuck list, int element)
{
    if (list->top + 1 == list->capacity)
    {
        int Newcapacity = list->capacity = (list->capacity >> 1);
        int *NewArray = realloc(list->Array, sizeof (int) * Newcapacity);
        if(NewArray == NULL) return 0;
        list->Array = NewArray;
        list->capacity = Newcapacity;
    }
    list->top++;
    list->Array[list->top] =element;
    return 1;
}

void printStack(ArrayStuck list)
{
    for (int i = 0; i <= list->top ; i++)
    {
        printf("%d ", list->Array[i]);
    }
    printf("\n");
}

int deleteStack (ArrayStuck stack)
{
    if (stack->top == -1) {return -1;}
    return 1;
}

int popStack (ArrayStuck stack)
{
    return stack->Array[stack->top--];
}


int main()
{
    struct Stack stack;
    initStuck(&stack);
    for(int i = 0; i < 3; i++)
    {
        pushStack(&stack, i * 100);
    }
    printStack(&stack);
    return 0;
}


