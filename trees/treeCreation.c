#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){  
    
    // fn return type is struct node*  fn name is createNode
    struct node* n;   // creating node with name n
    n = (struct node*)malloc(sizeof(struct node));  //allocating memory to the node
    n->data = data;  // us node me data daala, left aur right me null daala...
    n->left = NULL;
    n->right = NULL;
    return n;
};


int main(){
    struct node* p = createNode(4);
    struct node* p1 = createNode(1);
    struct node* p2 = createNode(6);
    struct node* p3 = createNode(5);
    struct node* p4 = createNode(2);

    // now linking the root node with left & right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);
    printf("\n");
    postOrder(p);
    printf("\n");
    inOrder(p);
    printf("\n");


    return 0;
}



// node declaration, node creation fn, required fn in that ques..