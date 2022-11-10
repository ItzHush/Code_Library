#include <stdio.h>
#include <stdlib.h>

typedef int E; //��int ������ΪE

struct list
{
    E *array;
    int capcacity; //��������
    int size;      //�ܹ�����
};

typedef struct list *Arraylist; //��struct list *������ΪArraylist

int initlist(struct list *list) //�������ָ��
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

_Bool insertlist(struct list *list, E element, E index) // indexΪ����λ�ã�elementΪ����ֵ
{
    if (list->size == list->capcacity)                               //����
    {
        int newcapacity = list->capcacity + (list->capcacity >> 1);  //���Ʋ����൱�ڰ�ԭ�е����ݴ�С����2
        int *newArray = realloc(list->array, newcapacity * sizeof(E)); //��array�Ĵ�С����newcapacity * sizeof(E)
        if (newArray == NULL)
            return 0;
        list->array = newArray;
        list->capcacity = newcapacity;
    }

    for (int i = list->size; i > index - 1; --i)
    {
        list->array[i] = list->array[i - 1];
    } //�������һλ����ǰһλ�����������
    list->array[index - 1] = element;
    list->size++;
    return 1;
}

void print(struct list *list) //�������
{
    for (int i = 0; i < list->size; i++)
    {
        printf("%d\t", list->array[i]);
    }
    printf("\n");
}

void deletelist(struct list *list, E index)
{
    for (int i = index - 1; i <= list->size - 1; i++)//�����0��ʼ����
    {
        list->array[i] = list->array[i + 1];
        list->size--;
    }
}

int main()
{
    struct list List; //����һ����list�Ľṹ��
    initlist(&List);
        for (int i = 1; i < 10; i++)
        {
            insertlist(&List, i, i);        
        }
        deletelist(&List, 8);
        print(&List);
        return 0;
}