#include <stdio.h>
#include <stdlib.h>
//�ṹ
struct Node
{
    int data;
    struct Node *next;
};
//����
struct Node *creatlist()
{
    struct Node *headnode = (struct Node*)malloc(sizeof(struct Node));
    headnode->next = NULL;
    return headnode;
}

//�ڵ�
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