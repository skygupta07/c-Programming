#include<stdio.h>

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// first sort the array then apply sorting algorithm..
// bubble sort
void bubbleSort(int arr[], int n){
    for (int i =0; i<n; i++){ // loop runs n times..
        for (int j = 0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){ // swap them
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }

        }
    }

}

void binarySearch(int arr[], int n, int target){
    bubbleSort(arr,n);
    int lo = 0;
    int hi = n-1;
    int mid = lo + (hi-lo)/2;

    while (lo<=hi){
        if(arr[mid]==target){
            printf("target: %d found at %d index\n",target,mid);
            return;
        }
        else if(arr[mid]<target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
}

int main(){
    int arr[]={1,4,7,10,12,17,8,5,2};
    int n = 9;
    int target = 7;
    display(arr,n);
    binarySearch(arr,n,target);
    return 0;
}