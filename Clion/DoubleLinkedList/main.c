#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int element;
    struct ListNode *next;
    struct ListNode *prev;
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
    Node node = malloc(sizeof(struct ListNode));//node是为了新的元素创建的节点
    if(node == NULL)
        return 0;
    node->element = element;
    if (head->next != NULL){
        node->next = head->next;
        head->next->prev = node;
    } else{
         node->next =NULL;
    }

    head->next = node;
    node->prev = head;

    return 1;
}

_Bool deleteList (Node head, int index)
{
    if (index < 1) return 0;
    while(--index)
    {
        head = head->next;
        if (head == NULL) return 0;
    }
    if (head->next == NULL) return 0;//head为前驱节点，head->next才是待删除结点

    Node tmp = head->next;//创建Node tmp暂时存放head->next;
    if (head->next->next){
        head->next = head->next->next;
        head->next->prev = head;
    } else{
        head->next = NULL;
    }

    free(tmp);
    return 1;
}

int main(void)
{
    struct ListNode head;//创建头结点
    initlist(&head);
    for (int i = 1; i<= 5; i++)
        insertList(&head, i*100, i);
    deleteList(&head, 3);

    Node node = &head;
    do{
        node = node->next;
        printf_s("%d ->", node->element);
    } while (node->next != NULL);


}