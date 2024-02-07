#include <iostream>
using namespace std; 

struct node
{
    int key;
    struct node *left, *right;
}
//create the tree
stuct node* newNode(int item)
{
  struct node* temp = (struct node*) malloc(
  sizeof (struct));
  temp -> key = item; 
  temp -> left = temp -> right = NULL;
  return temp;  
}

//insert the node intert a new node
struct *node insert(struct node* node, int key){
    //if the tree is empty why return a new node?
    if (node == NULL)
    return newNode (key); 

    //what is recuring down the tree mean?
    if (key < node -> key)
    {
        node -> left = insert(node-> left , key);
    }
    else if (key > node ->)
    {
        node -> right = insert(node -> right , key);
    }
    
    //return the node pointer
    return node; 
        
}
// How to traversal of Binary Search Tree
void inorder(struct node* root){
    if (root != NULL){
        inorder(root -> left);
        cout << " " << root -> key;
        inorder(root -> right);
    }

    int main(){
        struct node* root = NULL;
        root = insert(root, 12);
        insert(root, 22);
        insert(root, 83); 
        insert(root, 10);
        insert(root, 88);
        insert(root, 290);
        insert(root, 39);
        insert(root, 540);
        insert(root, 5993);
        insert(root, 2949);
        insert(root, 399);
        
            
    }
 
}

