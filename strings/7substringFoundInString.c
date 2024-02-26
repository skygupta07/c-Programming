// substring found in another string
#include <stdio.h>
#include <string.h>  // .h since c programming
 
int substring(char *s1, char *s2) {  
    //fn       s1 is substring   s2 is original string..
    int len1 = strlen(s1);  // strlen(string) is the inbuilt function to calculate the length of string..
    int len2 = strlen(s2);
    
    for(int i = 0; i <= len2 - len1; i++) {
        // in worse situation if the substring is found at the end of original string 
        // then also maximum iteration possible is: len2-len1
        int j;
        for(j = 0; j < len1; j++) {
            if(s2[i+j] != s1[j])
                break;
        }
        if(j == len1)
            return i;
    }
    
    return -1;
}

int main() {
    char *s1 = "world";
    char *s2 = "hello world";
    int pos = substring(s1, s2);
    if(pos != -1)
        printf("'%s' found at position %d in '%s'\n", s1, pos, s2);
    else
        printf("'%s' not found in '%s'\n", s1, s2);
    return 0;
}

/*
'world' found at position 6 in 'hello world'

[Program finished]
*/
