//20 count vowels, consonants and digits9

#include <stdio.h>
#include <ctype.h>


int main() {
    char string[100];  // char arr is string #naam to chahe kuch bhi do..
    int vowels = 0, consonants = 0, digits = 0;
    

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); //to take input the string 

    for (int i = 0; string[i] != '\0'; i++) { // trick to traverse over the whole string..
        char ch = tolower(string[i]); // sabko lower me kiya for easy comparison..
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}

/*
Enter a string: hey how are you i live in 2572/66a molarband
Vowels: 14
Consonants: 15
Digits: 6

[Program finished]
*/

