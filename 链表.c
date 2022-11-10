#include <stdio.h>
#include <stdlib.h>
//结构
struct Node
{
    int data;
    struct Node *next;
};
//链表
struct Node *creatlist()
{
    struct Node *headnode = (struct Node*)malloc(sizeof(struct Node));
    headnode->next = NULL;
    return headnode;
}

//节点
struct Node * creatnode (int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}



int main()
{
    struct Node *list = creatlist();
    return 0;
}