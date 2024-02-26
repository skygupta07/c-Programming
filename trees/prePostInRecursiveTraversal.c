#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;

};

struct node* createNode(int data){
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node* root){  // Root Left Right...
    if (root!=NULL){   // base case..
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);  // fn call recursively..
    }
    
}

void postOrder(struct node* root){   // Left Right Root..
    if (root!=NULL){
        postOrder(root->left);
        postOrder(root->right);  // fn call recursively..
        printf("%d ", root->data);
    }
    
}

void inOrder(struct node* root){   // Left Root Right..
    if (root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);  // fn call recursively..
        
    }
    
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

    preOrder(p);
    printf("\n");
    postOrder(p);
    printf("\n");
    inOrder(p);
    printf("\n");


    return 0;
}