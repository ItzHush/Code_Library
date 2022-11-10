#include <stdio.h>
#include <stdlib.h>

typedef int E;

struct List
{
    E *array;
    int capacity;
    int size;
};

typedef struct List *ArrayList;

_Bool initList(ArrayList list)
{
    list->array = malloc(sizeof(E) * 10);
    if (list->array == NULL)
        return 0;
    list->capacity = 10;
    list->size = 0;
    return 1;
}

_Bool insertList(ArrayList list, E element, int index)
{
    if (index < 1 || index > list->size + 1)
        return 0;

    if (list->size == list->capacity)
    {
        int newCapacity = list->capacity + (list->capacity >> 1);
        E *newArray = realloc(list->array, newCapacity * sizeof(E));
        if (newArray == NULL)
            return 0;
        list->array = newArray;
        list->capacity = newCapacity;
    }

    for (int i = list->size; i > index - 1; --i)
        list->array[i] = list->array[i - 1];
    list->array[index - 1] = element;
    list->size++;
    return 1;
}

void printList(ArrayList list)
{                                        //编写一个函数用于打印表当前的数据
    for (int i = 0; i < list->size; ++i) //表里面每个元素都拿出来打印一次
        printf("%d ", list->array[i]);
    printf("\n");
}

int main()
{
    struct List list;
    if (initList(&list))
    {
        for (int i = 0; i <= 30; ++i)
            insertList(&list, i, i);
        printList(&list);
        printf("%d", list.size);
    }
    else
    {
        printf("顺序表初始化失败，无法启动程序！");
    }
}
