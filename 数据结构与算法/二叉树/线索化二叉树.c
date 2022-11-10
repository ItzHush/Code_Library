#include <stdio.h>
#include <stdlib.h>
typedef char E;

typedef struct TreeNode
{
    char element;
    struct TreeNode *left;
    struct TreeNode *right;
    int lefttag, righttag;
} *Node;
Node Creatnode (char element)
{
    Node node = malloc(sizeof(struct TreeNode));
    node->left = node->right = NULL;
    node->lefttag = node->righttag = 0;
    node->element = element;
    return node;//创建一个名为node的treenode结构体，并返回给对应的字母节点
}

Node pre = NULL; //这里我们需要一个pre来保存后续结点的指向
void preOrderThreaded(Node root)
{ //前序遍历线索化函数
    if (root == NULL)
        return;

    if (root->left == NULL)
    { //首先判断当前结点左边是否为NULL，如果是，那么指向上一个结点
        root->left = pre;
        root->lefttag = 1; //记得修改标记
    }
    if (pre && pre->right == NULL)
    { //然后是判断上一个结点的右边是否为NULL，如果是那么进行线索化，指向当前结点
        pre->right = root;
        pre->righttag = 1; //记得修改标记
    }

    pre = root; //每遍历完一个，需要更新一下pre，表示上一个遍历的结点

    if (root->lefttag == 0) 
        preOrderThreaded(root->left);
    if (root->righttag == 0)
        preOrderThreaded(root->right);
}

void inOrder(Node root)
{
    while(root)
    {
        printf("%c ", root->element);
        if(root->lefttag == 0)
            root = root->left;
        else 
            root = root->right;
    }
}

int main()
{
    Node a = Creatnode('A');
    Node b = Creatnode('B');
    Node c = Creatnode('C');
    Node d = Creatnode('D');
    Node e = Creatnode('E');
    a->left = b;
    b->left = d;
    a->right = c;
    b->right = e;
    preOrderThreaded(a);
    inOrder(a);
    return 0;
}