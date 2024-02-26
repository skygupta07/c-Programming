#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer{
        char name[20];
        int age;
        int match;
        int avgrun;

    }cricketer;

    cricketer arr[5];  // array of structure..of size 5
    
    // filling data into array..
    arr[0].age = 19;
    arr[0].avgrun = 80;
    arr[0].match = 45;
    strcpy (arr[0].name , "raina");

    arr[1].age = 15;
    arr[1].avgrun = 85;
    arr[1].match = 450;
    strcpy (arr[1].name , "sehwag");

    arr[0].age = 34;
    arr[0].avgrun = 180;
    arr[0].match = 95;
    strcpy (arr[0].name , "dhoni");

    arr[2].match = 59;
    arr[2].age = 19;
    arr[2].avgrun = 78;
    strcpy (arr[2].name , "kohli");

    arr[3].age = 18;
    arr[3].avgrun = 87;
    arr[3].match = 49;
    strcpy (arr[3].name , "jadeja");

    // printing the ouput

    for (int i=0; i<3; i++){
        printf ("Name: %s\n", arr[i].name);
        printf ("Age: %d\n" , arr[i].age);
        printf ("Number of Matches: %d\n", arr[i].match);
        printf("Average Run: %d\n", arr[i].avgrun);

        printf("\n\n");

    }


    


    













}
