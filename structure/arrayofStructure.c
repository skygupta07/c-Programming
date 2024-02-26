#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int cap;
        char tier;
        char name[20];   // strings are character array...

    }pokemon;

    pokemon arr[3];  // declaring array of size 3
    arr[0].cap = 10;
    arr[0].hp=20;
    arr[0].speed = 50;
    arr[0].tier = 'A';
    strcpy(arr[0].name , "pikachu");
    
      // here we can see that we are putting different data types in array
                        // this is possible because of array of structure
    

    arr[1].cap = 10;
    arr[1].hp=40;
    arr[1].speed = 70;
    arr[1].tier = 'B'; 

    return 0;
}

    