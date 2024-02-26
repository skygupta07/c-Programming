#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr; 
     // pointer variable p which stores the address of 1st element of array..

 
    printf("Enter %d integers:\n", n);
    int i =0;
    while(i<n) {
        scanf("%d", p + i);
        i++;
    }

    printf("The elements of the array in reverse order are:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}

/*
Enter the size of the array: 5
Enter 5 integers:
3
5
6
7
8
The elements of the array in reverse order are:
8 7 6 5 3

[Program finished]
*/
