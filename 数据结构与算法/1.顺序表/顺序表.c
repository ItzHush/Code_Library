#include <stdio.h>
#include <stdlib.h>

typedef int E; //将int 重命名为E

struct list
{
    E *array;
    int capcacity; //数组容量
    int size;      //总共数量
};

typedef struct list *Arraylist; //将struct list *重命名为Arraylist

int initlist(struct list *list) //传入的是指针
{
    list->capcacity = 10;
    list->array = malloc(sizeof(E) * list->capcacity);
    list->size = 0;
    if (list->array == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

_Bool insertlist(struct list *list, E element, E index) // index为插入位置，element为插入值
{
    if (list->size == list->capcacity)                               //扩容
    {
        int newcapacity = list->capcacity + (list->capcacity >> 1);  //右移操作相当于把原有的数据大小除以2
        int *newArray = realloc(list->array, newcapacity * sizeof(E)); //将array的大小换成newcapacity * sizeof(E)
        if (newArray == NULL)
            return 0;
        list->array = newArray;
        list->capcacity = newcapacity;
    }

    for (int i = list->size; i > index - 1; --i)
    {
        list->array[i] = list->array[i - 1];
    } //数组里后一位等于前一位，整体向后移
    list->array[index - 1] = element;
    list->size++;
    return 1;
}

void print(struct list *list) //输出函数
{
    for (int i = 0; i < list->size; i++)
    {
        printf("%d\t", list->array[i]);
    }
    printf("\n");
}

void deletelist(struct list *list, E index)
{
    for (int i = index - 1; i <= list->size - 1; i++)//数组从0开始计数
    {
        list->array[i] = list->array[i + 1];
        list->size--;
    }
}

int main()
{
    struct list List; //创建一个叫list的结构体
    initlist(&List);
        for (int i = 1; i < 10; i++)
        {
            insertlist(&List, i, i);        
        }
        deletelist(&List, 8);
        print(&List);
        return 0;
}