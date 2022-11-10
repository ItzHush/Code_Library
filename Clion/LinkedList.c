#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int element;
    struct ListNode *next;
};

typedef struct ListNode * Node;

void initList(Node head)//初始化一个头结点
{
    head->next = NULL;
}

_Bool insertList(Node head, int element, int index){
    if(index < 1) return 0;
    while (--index)
    {
        head = head->next;  //从头节点开始向后移index个节点，从而找到前驱节点
        if(head == NULL)
            return 0;
    }
    Node node = malloc(sizeof (struct ListNode));
    node->element = element;
    node->next =head->next;
    head->next = node;
    return 1;
}

void printList (Node head)
{
    while(head->next == NULL)
    {
        head = head->next;//头结点为空，从第二个开始打印
        printf("%d ", head->element);

    }
}

_Bool deleteList (Node head, int index)
{
    if(index < 1) return 0;
    while(--index)
    {
        head = head->next;
        if(head == NULL)
            return 0;
    }
    if(head->next == NULL) return 0;

    head->next = head->next->next;
    free(head->next);

}

int main()
{
    struct ListNode head;   //这里创建新的头结点
    initList(&head);//初始化
    for (int i = 0; i < 3; ++i) {
        insertList(&head, i * 100, i);
    }
    deleteList(&head, 0);   //这里我们尝试删除一下第一个元素
    printList(&head);
    return 0;
}