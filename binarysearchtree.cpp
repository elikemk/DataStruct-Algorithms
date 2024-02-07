
#include <bits/stdc++.h>
using namespace std;
 //Elikem Kalitsi Feb 6th 
//create the tree

struct node
{
    int key;
    struct node *left, *right;
};
 
//insert the node intert a new node
struct node* newNode(int item)
{
    struct node* temp = (struct node*)malloc(
            sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 

struct node* insert(struct node* node, int key)
{
     
    if (node == NULL)
        return newNode(key);
 
    if (key < node->key) 
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
    }
 
    // Return the node pointer
    return node;
}
 
// Function BST
void inorder(struct node* root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        cout << " " << root->key;
        inorder(root->right);
    }
}
 
int main()
{
     
   
    struct node* root = NULL;
 
 
    root = insert(root, 11);
    insert(root, 290);
    insert(root, 2000);
    insert(root, 4000);
    insert(root, 720);
    insert(root, 6390);
    insert(root, 390);
    insert(root, 8679);
    insert(root, 7890);
    insert(root, 2334);
    insert(root, 4567);
    insert(root, 465);
    insert(root, 5);





 
    // Function Call
    inorder(root);
 
    return 0;
}
 
