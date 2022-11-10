#include <stdio.h>
#include <malloc.h>

struct TreeNode
{
    char element;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode *Node;

void preOrder(Node root)
{
    if (root == NULL)
        return; //如果走到NULL了，那就表示已经到头了，直接返回
    printf("%c", root->element);
    preOrder(root->left);
    preOrder(root->right);
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
    d->left = e->right = NULL;
    e->left = e->right = NULL;
    f->left = f->right = NULL;
    preOrder(a);

}