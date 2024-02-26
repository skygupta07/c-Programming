#include<stdio.h>
 
void bubbleSort(int arr[], int n){
    for (int i =0; i<n; i++){
        for (int j = 0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }

        }
    }

}

float calculateMean(int *arr, int n){

    int sum = 0;
    for (int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    float mean = sum/n;
    return mean;
}

float calculateMedian(int *arr, int n){  
    //  sort then tackle even odd case
    bubbleSort(arr,n);
    if(n%2 == 0){  // even size array
         return(arr[n/2]+arr[n/2 + 1])/2;
    }
    else{
        return(arr[(n+1)/2]);
    }
    

}

int main(){
    int arr[]={10,3,4,7,9,1,2};
    printf("mean of the array is: %f\n",calculateMean(arr,7));
    printf("median of the array is: %f\n", calculateMedian(arr, 7));
    return 0;
}