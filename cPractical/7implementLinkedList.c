#include <stdio.h>
#include <stdlib.h> 
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

// fn to display the list
void printList(){
   struct node *p = head;
   printf("\n[");

   //start from the beginning
   while(p != NULL) {
      printf(" %d ",p->data);
      p = p->next;
   }
   printf("]");
}

//insertion at the beginning
void insertatbegin(int data){

   //create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;

   // point it to old first node
   lk->next = head;

   //point first to new first node
   head = lk;
}
void insertatend(int data){

   //create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   struct node *temp = head;

   // point it to old first node
   while(temp->next != NULL)
      temp = temp->next;

   //point first to new first node
   temp->next = lk;
}
void insertafternode(struct node *list, int data){
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   lk->next = list->next; // kisi node ka next* karna matlab ussi node ka pointer wala part..
   list->next = lk;
}
void deleteatbegin(){
   head = head->next;
}
void deleteatend(){
   struct node *temp = head;
   while (temp->next->next != NULL){
      temp = temp->next;
   }
   temp->next = NULL;
}
void deletenode(int key){
   struct node *temp = head, *prev;
   if (temp != NULL && temp->data == key) {
      head = temp->next;
      return;
   }

   // Find the key to be deleted
   while (temp != NULL && temp->data != key) {
      prev = temp;
      temp = temp->next;
   }

   // If the key is not present
   if (temp == NULL) return;

   // Remove the node
   prev->next = temp->next; // just skipping that node and pointing previous node to next to node..
}
int searchlist(int key){
   struct node *temp = head;
   while(temp != NULL) {
      if (temp->data == key) {
         return 1;
      }
      temp=temp->next;
   }
   return 0;
}
int main(){
   int k=0;
   insertatbegin(12);
   insertatbegin(22);
   insertatend(30);
   insertatend(44);
   insertatbegin(50);
   insertafternode(head->next->next, 33);
   printf("Linked List: ");

   // print list
   printList();
   deleteatbegin();
   deleteatend();
   deletenode(12);
   printf("\nLinked List after deletion: ");

   // print list
   printList();
   insertatbegin(4);
   insertatbegin(16);
   printf("\nUpdated Linked List: ");
   printList();
   k = searchlist(16);
   if (k == 1)
      printf("\nElement is found");
   else
      printf("\nElement is not present in the list");

    return 0;
}