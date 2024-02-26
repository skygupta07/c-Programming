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
    return n; // node create karke usme data wagera insert karke then fn ko return kar diya..
};

void insert(struct node* root, int key){
    struct node* prev = NULL;
    while(root!=NULL){
        prev = root;  //imp
        if(key == root->data){
            printf("cannot insert %d already exist in the tree..", key);
            return;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* new = createNode(key);
    if(key<prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }

}



int main(){
    return 0;
    struct node* p = createNode(8);
    struct node* p1 = createNode(3);
    struct node* p2 = createNode(1);
    struct node* p3 = createNode(6);
    struct node* p4 = createNode(4);
    struct node* p5 = createNode(7);
    struct node* p6 = createNode(10);
    struct node* p7 = createNode(14);
    struct node* p8 = createNode(13);

    // 
    // a binary search tree..
    //     8
    //    / \
    //   3   10
    //   /\    /\
    //  1  6   x  14
    //     /\      /\
    //     4 7    13 x


    // linking nodes
    p->left = p1;
    p->right = p6;
    p1->left = p2; 
    p1->right = p3;
    p3->left = p4;
    p3->right = p5;
    p6->right = p7;
    p7->left = p8;

    insert(p,8);
    printf("%d", p5->right->data);

}