//Author : Yashas B K
//Date : 27-05-2022
//Description : WAP to create a binary search tree using recursion 

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} tree;

tree *create();
void inorder(tree *root);
void preorder(tree *root);
void postorder(tree *root);

int main()
{
    tree *root = create();
    printf("Inorder traversal is : ");
    inorder(root);
    printf("\nPreorder traversal is : ");
    preorder(root);
    printf("\nPostorder traversal is : ");
    postorder(root);

    return 0;
}

tree *create()
{
    int data = 0;
    tree *newnode = (tree *)malloc(sizeof(tree));
    if (newnode == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Enter data -1 for no node\n");
        scanf("%d", &data);
        if (data == -1)
        {
            return 0;
        }
        else
        {
            newnode->data = data;
            printf("Enter the left child of %d\n", data);
            newnode->left = create();
            printf("Enter the right child of %d\n", data);
            newnode->right = create();
            return newnode;
        }
    }
}

void inorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(tree *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d ", root->data);
    }
}