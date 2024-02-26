#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int health;
        int speed;
        char name[20];   // [size]is important because strings are character array...


    }pokemon;

    pokemon p1;
    p1.hp = 10;
    p1.health =30;
    p1.speed= 60;
    strcpy(p1.name, "pikachu");

    pokemon p2;
    p2.hp = 15;
    p2.health =60;
    p2.speed= 80;
    strcpy(p1.name, "mewtwo");


    typedef struct legendarypokemon{
        pokemon normal;
        int ability;
        int capacity;

    }legendarypokemon;

    legendarypokemon p3;
    p3.normal.hp =100;
    p3.normal.speed =150;
    p3.ability =49;

    printf ("%d\n", p3.ability);











}