#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};


struct node* createNode(int data){
    struct node* n;
    n = (struct node*) malloc(sizeof (struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;

};

// inorder traversal: left root right
void inorder(struct node* root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
        
    }


}

int isBST(struct node* root){
    static struct node* prev = NULL;
    if (root!= NULL){
        if (!isBST(root->left)){
            return 0;
        }
        if (prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

// static variable ka use kiya 



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
    printf("%d", isBST(p));

}


// we will use the property that the inorder traversal of the binary search tree gives us the 
// element in ascending order..
// Binary Search Tree: Insertion in a binary search tree..