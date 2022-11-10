#include <stdio.h>
#include <malloc.h>

struct TreeNode
{
    char element;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode *Node;
//�õݹ�ʵ�ִ�ӡ����������㺯����

void preOrder(Node root)//ǰ�����
{
    if (root == NULL)
        return; //����ߵ�NULL�ˣ��Ǿͱ�ʾ�Ѿ���ͷ�ˣ�ֱ�ӷ���
    printf("%c", root->element);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node root)//�������
{
    if(root == NULL)
        return;
    inOrder(root->left); //�������������ٴ�ӡ
    printf("%c", root->element);
    inOrder(root->right);
}

void postOrder(Node root)//�������
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%c", root->element); //ʱ���ӳٵ����
}

int main()
{
    Node a = malloc(sizeof(struct TreeNode));
    Node b = malloc(sizeof(struct TreeNode));
    Node c = malloc(sizeof(struct TreeNode));
    Node d = malloc(sizeof(struct TreeNode));
    Node e = malloc(sizeof(struct TreeNode));
    Node f = malloc(sizeof(struct TreeNode));
    a->element = 'A';
    b->element = 'B';
    c->element = 'C';
    d->element = 'D';
    e->element = 'E';
    f->element = 'F';

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    c->left = NULL;
    d->left = d->right = NULL;
    e->left = e->right = NULL;
    f->left = f->right = NULL;
    //preOrder(a);
    inOrder(a);
    return 0;
}