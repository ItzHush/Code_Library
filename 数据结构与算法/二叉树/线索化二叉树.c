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
    return node;//����һ����Ϊnode��treenode�ṹ�壬�����ظ���Ӧ����ĸ�ڵ�
}

Node pre = NULL; //����������Ҫһ��pre�������������ָ��
void preOrderThreaded(Node root)
{ //ǰ���������������
    if (root == NULL)
        return;

    if (root->left == NULL)
    { //�����жϵ�ǰ�������Ƿ�ΪNULL������ǣ���ôָ����һ�����
        root->left = pre;
        root->lefttag = 1; //�ǵ��޸ı��
    }
    if (pre && pre->right == NULL)
    { //Ȼ�����ж���һ�������ұ��Ƿ�ΪNULL���������ô������������ָ��ǰ���
        pre->right = root;
        pre->righttag = 1; //�ǵ��޸ı��
    }

    pre = root; //ÿ������һ������Ҫ����һ��pre����ʾ��һ�������Ľ��

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