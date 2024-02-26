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

struct node* searchIter(struct node* root, int key){
    while(root!=NULL){
        if (key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
        
    }
    return NULL; // if bye chance user input the root node as NULL then NULL should be returned..

}

// important: we are applying iterative or Recursive search on Binary Search Tree..

int main(){
    struct node* p = createNode(8);
    struct node* p1 = createNode(7);
    struct node* p2 = createNode(9);
    struct node* p3 = createNode(4);
    struct node* p4 = createNode(5);

    // now linking the root node with left & right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    struct node* n = searchIter(p, 8);  //search fn jo bhi node* return karega usko n me store kiya
    if (n!= NULL){
        printf ("found: %d", n->data);
    }
    else{
        printf("element not found.");
    }


}

