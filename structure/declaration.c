#include <stdio.h>

int main(){
    struct pokemon{
        int hp;
        int speed;
        int health;
        char tier;

    }pikachu,charizard;

    
    pikachu.health = 80;
    pikachu.speed  = 60;
    pikachu.hp = 98;
    pikachu.tier = 'a';

    charizard.health = 40;
    charizard.speed = 50;
    // charizard.hp = 60;
    charizard.tier = 's';

    printf("%d\n", pikachu.hp);
    printf("%c\n", pikachu.tier);

    // if taking input

    printf("enter the hp of charizard: ");
    scanf("%d", &charizard.hp);

    printf ("%d\n", charizard.hp);

    struct legendarypokemon{
        int hp;
        int speed;
        int health;
        char tier;

        int capacity;
        
    };

    struct legendarypokemon snowfall;
    snowfall.capacity = 56;
    


    return 0;



}