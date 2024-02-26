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

    pokemon a,b,c;  // declaring array of size 3
    a.cap = 10;
    a.hp=20;
    a.speed = 50;
    a.tier = 'A';
    strcpy(a.name , "pikachu");
    
      // here we can see that we are putting different data types in array
                        // this is possible because of array of structure
    
    b=a;  // ek copy of a ban jaegi jisme ki ab change karne par
        // kewal b me hi change aaega..
    strcpy(b.name , "charizard");
    
    printf("%s\n", a.name);
    printf("%s\n", b.name);


    return 0;
}

    