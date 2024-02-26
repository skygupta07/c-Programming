#include<stdio.h>

void bubbleSort(int arr[], int n){
    for (int i =0; i<n; i++){ // loop runs n times..
        for (int j = 0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }

        }
    }

}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,2,4,8,5,10,3};
    bubbleSort(arr,7);
    display(arr,7);
}
