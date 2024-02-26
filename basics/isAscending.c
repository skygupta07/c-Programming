#include<stdio.h>


int main(){
    int arr[]={2,5,8,10,30,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 1; // flag = 1 means sorted

    for (int i=0; i<n; i++){  // check for segmentation fault..
        if (arr[i]<arr[i+1]){
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }

    if (flag == 0){
        printf("not in asc order\n");

    }
    if (flag == 1){
        printf("yes in asc order\n");
    }

    return 0;

}