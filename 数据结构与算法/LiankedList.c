#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int element;
    struct ListNode *next;
    struct Listnode *prev;
};

typedef struct ListNode *Node;

void initlist (Node node)
{
    node->next = node->prev = NULL;//前驱和后驱都设为空
}

_Bool insertList(Node head, int element, int index)
{
    if (index < 1)
        return 0;
    while (--index)//寻找前驱节点
    {
        head = head->next;
        if(head == NULL)
            return 0;
    }
    Node node = malloc(sizeof(struct ListNode));//node为为了新的元素创建的节点
    if(node == NULL)
        return 0;
    node->element = element;

    node->next = head->next;
    head->next->prev = node;

    head->next = node;
    node->prev = head;
}

int mian(void)
{
    struct ListNode head;//创建头结点
    initlist(&head);

}


