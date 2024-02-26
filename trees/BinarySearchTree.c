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
    return n;  // fn return type is struct node*
};

struct node* search(struct node* root, int key){
    // root node bhejna yani haath pakda dena aage tum puri linked list dekh lena
    if (root == NULL){  
        return NULL;
    }
    if (root->data == key){
        return root;
    }
    else if (root->data<key){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}






int main(){
    struct node* p = createNode(1);
    // p name ki node banai jisme ki value as 2 daal diya..
    struct node* p1 = createNode(2);
    struct node* p2 = createNode(3);
    struct node* p3 = createNode(4);
    struct node* p4 = createNode(6);
    struct node* p5 = createNode(7);

//      1
//     / \
//     2  3
//     /\   /\
//    4  X  6 7 
    
    // now linking the root node with left & right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p2->left = p4;
    p2->right = p5;

   printf("%d", search(p, 4));

    

    
    
    
    
    
    
    
    
    
    
    return 0;

}

//binary search ka fayda hai ki har step me hum apne search space ho seedha half karte jaate hai..

