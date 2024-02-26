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

void inOrder(struct node* root){   // Left Root Right..
    if (root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);  // fn call recursively..
        
    }    
}
struct node* inOrderPredecessor(struct node* root){  // inOrderPredecessor is left subtree ka rightmost child..
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;

}

struct node* deleteNode(struct node* root, int value){
    struct node* iPre;
    if(root==NULL){  // if user gave null then return it..
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL; // imp
    }
    //search for the node to be deleted... Recursively
    if (value<root->data){
        root->left = (root->left, value);
    }
    else if(value>root->data){
        root->right = deleteNode(root->right, value);
    }

    // for deletion when we value=root->data;
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        deleteNode(root->data, iPre->left);
    }

    return root;

}



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

    
    return 0;
}



















































//deletion in BST -> binary search tree..

// case1: leaf node
// search and delete..

// case2: non leaf node 
// search and delete..


// case3: when node is the root node to be delted...
// step1-> search for the node
// step2-> search for InOrderPre or PostOrderPre...
// step3-> keep doing this until the tree has no empty nodes..