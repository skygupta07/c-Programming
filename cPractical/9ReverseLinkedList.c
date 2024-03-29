// Write a program to print the elements of a linked list in reverse order without
// disturbing the linked list.

// C program to print reverse of a linked list
#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct Node{
	int data;
	struct Node* next;
};

/* Function to reverse the linked list */
void printReverse(struct Node* head){
	if (head == NULL) // base case
	return;

	// print the list after head node
	printReverse(head->next);  // fn call

	// After everything else is printed, print head
	printf("%d ", head->data);  // print
}

/*UTILITY FUNCTIONS*/
/* Push a node to linked list. Note that this function
changes the head */
void push(struct Node** head_ref, char new_data)
{
	/* allocate node */
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list of the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Driver program to test above function*/
int main()
{
	// Let us create linked list 1->2->3->4
	struct Node* head = NULL;
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);

	printReverse(head);
	return 0;
}
