#include<stdio.h>

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,3,5,7,9,2,4,6,8};
    int n = 9;
    display(arr,n);
    return 0;
}