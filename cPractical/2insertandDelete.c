#include <stdio.h>
#define MAX_SIZE 100
// Function to insert an element at a specified position in the array
void insertElement(int array[], int* size, int position, int element) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
return; }
    if (position < 0 || position > *size) {
        printf("Invalid position. Cannot insert element.\n");
        return;
}
    // Shift elements to the right to create space for the new element
    for (int i = *size - 1; i >= position; i--) {
        array[i + 1] = array[i];
}
    // Insert the element at the specified position
    array[position] = element;
    // Increment the size of the array
    (*size)++;
    printf("Element %d inserted successfully.\n", element);
}
// Function to delete an element at a specified position from the array
void deleteElement(int array[], int* size, int position) {
    if (*size == 0) {
        printf("Array is empty. Cannot delete element.\n");
return; }
    if (position < 0 || position >= *size) {
        printf("Invalid position. Cannot delete element.\n");
        return;
}
// Shift elements to the left to overwrite the element at the
specified position
    for (int i = position; i < *size - 1; i++) {
        array[i] = array[i + 1];
}
    // Decrement the size of the array
    (*size)--;
    printf("Element at position %d deleted successfully.\n", position);
}
// Function to display the elements in the array
void displayArray(const int array[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main() {
    int array[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;
    displayArray(array, size);
    insertElement(array, &size, 2, 10); // Insert 10 at position 2
    displayArray(array, size);
    deleteElement(array, &size, 4); // Delete element at position 4
    displayArray(array, size);
return 0; }
