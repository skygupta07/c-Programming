#include <stdio.h>


#include <stdbool.h>

int main(){
    typedef struct date{
        int year;
        int month;
        int day;

    }date;

    date arr[2];  // array of structure

    arr[0].year = 2000;
    arr[0].month = 6;
    arr[0].day = 8;

    
    arr[1].year = 2000;
    arr[1].month = 6;
    arr[1].day = 8;

    int flag = 0;

    // for (int i =0; i<2; i++){

    //     if ( arr[0].year==arr[1].year && arr[0].month==arr[1].month && arr[0].day== arr[1].day){
    //         flag =1;

    //     }
        
    // }
    // if (flag==1){
    //         printf("both the dates are equal..\n");
    //     }

    // if(a==b){   // we can't compare two user defined structures...
    // printf("both the dates are equal. ");        
    // }








    
















}
