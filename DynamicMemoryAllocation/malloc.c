#include<stdio.h>
#include<stdlib.h>  // to import malloc, calloc fn..


int main(){
    
    // // use of malloc
    // int* ptr;
    // int n;
    // printf("enter the size of array you want to create:\n");
    // scanf("%d" , &n);

    // ptr = (int*)malloc(n* sizeof(int));    // imp //array with name ptr of size n will be created at runtime.
    // for (int i=0; i<n; i++){  // taking input
    //     printf("enter the value no. %d of the array\n",i );
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i=0; i<n; i++){  //printing output
    //     printf("The value no. %d of the array is: %d\n",i, ptr[i] );
    // }

//......................................................................


    // use of calloc
    int* ptr;
    int n;
    printf("enter the size of array you want to create:\n");
    scanf("%d" , &n);

    ptr = (int*)calloc(n, sizeof(int));    // imp //array with name ptr of size n will be created at runtime.
    // for (int i=0; i<n; i++){  // taking input
    //     printf("enter the value no. %d of the array\n",i );
    //     scanf("%d", &ptr[i]);
    // }

    //if we didn't take any input from the user, the calloc fn will automatically allocate zero to each element

    for (int i=0; i<n; i++){  //printing output
        printf("The value no. %d of the array is: %d\n",i, ptr[i] );
    }




    
    // use of realloc() 
    // to create array of new size.. realloc() is used..
    printf("enter the size of the new array you want to create:\n");
    scanf("%d", &n);

    for (int i=0; i<n; i++){  // taking input
        printf("enter the new value no. %d of the array\n",i );
        scanf("%d", &ptr[i]);
    }


    ptr = (int*)realloc(ptr, n*sizeof(int));  // syntax: mujhe thodi space aur dede heap se 
    for (int i=0; i<n; i++){  //printing output
        printf("The value no. %d of the array is: %d\n",i, ptr[i] );
    }
    
    
    free(ptr);
    
    
    
    
    
    
    
    
    return 0;



}

// agar aap chahte ho ki run time par say 10 size ki memory bane to dynamic memory allocation ka use karo