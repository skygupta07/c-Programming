#include <stdio.h>

int main() {
    char line[1000];
    char ch;
    int count = 0;
    
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);  // syntax
    
    printf("Enter the character to count: ");
    scanf("%c", &ch);
    
    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == ch) {
            count++;
        }
    }
    
    printf("The character '%c' appears %d times in the text.\n", ch, count);
    
    return 0;
}
