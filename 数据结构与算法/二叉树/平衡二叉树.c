#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct TreeNode{
    int element;
    struct TreeNode *left;
    struct TreeNode *right;
    int height;
} *Node;

Node creatNode (int element){
    Node node = malloc(sizeof(struct TreeNode));
    node->left = node->right = NULL;
    node->element = element;
    node->height = 1;
    return node;
}

int getheight (Node root){
    if (root == NULL)
        return NULL;
    else
        return root->height;
}

Node leftRotation(Node root){
    Node newroot = root->right;
    root->right = newroot->left;
    newroot->left = root;
    root->height = max(getHeight(root->right), getHeight(root->left)) + 1;
    newroot->height = max(getHeight(newroot->right), getHeight(newroot->left)) + 1;
    return newroot;
}

Node rightRotation(Node root)
{
    Node newroot = root->left;
    root->left = newroot->right;
    newroot->right = root;
    root->height = max(getHeight(root->right), getHeight(root->left)) + 1;
    newroot->height = max(getHeight(newroot->right), getHeight(newroot->left)) + 1;
    return newroot;
}

Node leftRightRotation(Node root){
    root->left = leftRotation(root->left);
    return rightRotation(root);
}

Node rightLeftRotation(Node root)
{
    root->right = rightRotation(root->right);
    return leftRotation(root);
}

Node insert (Node root, int element){
    if(root == NULL)
        root = creatNode(element);
    else if(element < root->element){
        root->left = insert(root->left, element);
        if(getheight(root->left) - getheight(root->right) > 1){
            if(root->left->element > element)
                root = leftRotation(root);
            else
                root = leftRightRotation(root);
        }
    } else if(element > root->element){
        root->right = insert(root->right, element);
        if(getheight(root->right) - getheight(root->left) > 1){
            if(root->right->element < element)
                root = rightRotation(root);
            else
                root = rightLeftRotation(root);
        }
    }

    root->height = max(getheight(root->left), getheight(root->right)) + 1;
    return root;
}

int main(){

}

