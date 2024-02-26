#include <stdio.h>

int main(){
    int x,y;
    int a = 4 , b = 5;

    int* j = &a ,k = &b;  // matlab ek hi line me multiple integers declare kar sakte ho.
                            // multiple pointers nahi..
    

    printf("%p\n", j);  // to print the address.
    printf("%p\n", k); //unsigned integer..
}


int main(){
    int x,y;
    int a = 4 , b = 5;

    int* j = &a;
    int* k = &b;  // matlab ek hi line me multiple integers declare kar sakte ho.
                            // multiple pointers nahi..
    

    printf("%p\n", j);  // to print the address.
    printf("%p\n", k); //unsigned integer..
}