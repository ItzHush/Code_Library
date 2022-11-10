#include <stdio.h>
#include <stdlib.h>

typedef int E;

struct ListNode {
    E element;
    struct ListNode * next;
};

typedef struct ListNode * Node;

void initList(Node node){
    node->next = NULL;
}

_Bool insertList(Node head, E element, int index){
    if(index < 1) return 0;
    while (--index) {
        head = head->next;
        if(head == NULL) return 0;
    }

    Node node = malloc(sizeof(struct ListNode));
    if(node == NULL) return 0;
    node->element = element;
    node->next = head->next;
    head->next = node;
    return 1;
}

_Bool deleteList(Node head, int index){
    if(index < 1) return 0;   //大体和上面是一样的
    while (--index) {
        head = head->next;
        if(head == NULL) return 0;
    }
    if(head->next == NULL) return 0;

    Node tmp = head->next;
    head->next = head->next->next;
    free(tmp);
    return 1;
}

int *getList (Node head, int index)
{
    if(index < 1) return 0;
    do{
        head=head->next;
        if(head == NULL) return 0;
    }while(--index);
    return &head->element;
}

int findList(Node head, E element){
    head = head->next;
    int i = 1;
    while(head){
        if(i == head->element) return i;
        head = head->next;
        i++;
    }
    return -1;
}

int sizeList(Node head){
    int i = -1;
    while(head){
        head = head->next;
        i++;
    }
    return i;
}



void printList (Node head)
{
    while(head->next)
    {
        head = head->next;//头结点为空，从第二个开始打印
        printf("%d ", head->element);
    }
    printf("\n");
}

int main()
{
    struct ListNode head;   //这里创建新的头结点
    initList(&head);//初始化
    for (int i = 1; i <= 3; ++i) {
        insertList(&head, i * 100, i);
    }
    deleteList(&head, 2);
    printList(&head);
    return 0;
}