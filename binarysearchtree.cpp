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
}
