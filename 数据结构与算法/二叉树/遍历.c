#include <stdio.h>
#include <malloc.h>

struct TreeNode
{
    char element;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode *Node;
//用递归实现打印二叉树（多层函数）

void preOrder(Node root)//前序遍历
{
    if (root == NULL)
        return; //如果走到NULL了，那就表示已经到头了，直接返回
    printf("%c", root->element);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node root)//中序遍历
{
    if(root == NULL)
        return;
    inOrder(root->left); //遍历完左子树再打印
    printf("%c", root->element);
    inOrder(root->right);
}

void postOrder(Node root)//后序遍历
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%c", root->element); //时机延迟到最后
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