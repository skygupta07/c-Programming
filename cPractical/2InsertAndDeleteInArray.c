#include<stdio.h>

void insert(int arr[],int n,int idx, int a){  // a is the element to be inserted..
    for (int i=idx; i<n; i++){          // n is the size of array
        arr[i+1] = arr[i];
    }
    arr[idx]=a;
    n = n+1;
}


void delete(int arr,int n, int b){ // b is the element to be deleted..

}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}






int main(){
    int arr[]={1,2,3,5,6,7,8,9};
    int n = 8;
    insert(arr,n,3,4); // array ke 3rd index pe 4 daal do..
    display(arr,n+1);
    return 0;
}