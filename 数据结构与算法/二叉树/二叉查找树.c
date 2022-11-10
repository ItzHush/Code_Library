#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int element;
    struct TreeNode *left;
    struct TreeNode *right;
} * Node;

Node CreatNode (int element){
    Node node = malloc(sizeof(struct TreeNode));
    node->left = node->right = NULL;
    node->element = element;
    return node;
}

Node insert (Node root, int element){
    if(root){
        if(element < root->element)
            root->left = insert(root->left, element);    

        else if(element >root->element)
            root->right = insert(root->right, element);
    } else
        root = CreatNode(element);
    
    return root;
}

void inOrder(Node root){
    if(root ==NULL)
        return;
    inOrder(root->left);
    printf("%d ", root->element);
    inOrder(root->right);
}

Node FindTree(Node root, int target){
    while(root){
        if (target > root->element)
            root = root->right;
        else if(target < root->element)
            root = root->left;
        else
            return root;
    }
    return NULL;
}

Node findMax(Node root){ //查找最大值就更简单了，最右边的一定是最大的
    while (root && root->right)
        root = root->right;
    return root;
}

Node Delete(Node root, int target){
    if (root == NULL)
        return NULL;
    if (target > root->element)
        root->right = Delete(root->right, target);
    else if (target <root->element)
        root->left = Delete(root->left, target);
    else /*找到了，开始删除*/  {
        if (root->left && root->right){
            Node max = findMax(root->left);//找左子树中的最大值
            root->element = max->element;
            root->left = Delete(root->left, root->element);//把原来的删掉
        } else{
            Node tmp = root;
            if(root->left)
                root = root->left;
            else
                root = root->right;
            free(tmp);
        }
    }
    return root;
}

int main()
{
    Node root = insert(NULL, 18);
    insert(root, 10);
    insert(root, 20);
    Delete(root, 18);
    inOrder(root);
    return 0;
}
