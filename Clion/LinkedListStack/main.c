#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct LNode
{
    int element;
    struct  LNode *next;
};

typedef struct LNode * Node;

struct Queue
{
    Node head,rear;
};

typedef struct Queue * LQueue;

_Bool initQueue (LQueue queue)
{
    Node node = malloc(sizeof (struct LNode));
    if (node == NULL) return 0;
    queue->head = queue->rear =node;
}

bool offerQueue(LQueue queue, int element)
{
    Node node = malloc(sizeof (struct LNode));
    if (node == NULL) return 0;
    node->element = element;//元素传递
    queue->rear->next = node;//尾节点的最后一个压入一个新的结构，完成入栈
    queue->rear = node;//重新定义尾节点
    return true;
}

int pullQueue(LQueue queue)
{
    Node tmp = queue->head->next;
    int e = tmp->element;
    queue->head->next = queue->head->next->next;
    if(queue->rear == tmp) queue->head = queue->rear;
    free(tmp);
    return e;

}


int main()
{
    struct Queue queue;
    initQueue(&queue);
}
