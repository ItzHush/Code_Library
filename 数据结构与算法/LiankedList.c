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
    node->next = node->prev = NULL;//ǰ���ͺ�������Ϊ��
}

_Bool insertList(Node head, int element, int index)
{
    if (index < 1)
        return 0;
    while (--index)//Ѱ��ǰ���ڵ�
    {
        head = head->next;
        if(head == NULL)
            return 0;
    }
    Node node = malloc(sizeof(struct ListNode));//nodeΪΪ���µ�Ԫ�ش����Ľڵ�
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
    struct ListNode head;//����ͷ���
    initlist(&head);

}


