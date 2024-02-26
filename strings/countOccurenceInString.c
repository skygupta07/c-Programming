//18.) Write a program that will count the number of occurrences of a specified character in 
// a given line of text

#include <stdio.h>
#include <string.h>
 
int main()
{
    //Specifying the size of the string
    int n = 100;
    
    //Declaring string of size n
    char str[n];
    printf("Input String: ");
    fgets(str,n,stdin);

    //The character whose number of occurrences will be counted 
    char letter;
    printf("Input letter to be searched: ");
    letter = getchar();
    // to get a single letter input getchar() is used..
    //Declaring a variable to keep count of the occurrence of the 'letter'
    int count = 0;
   
    //Iterating a loop through the string and comparing each character with a letter 
    for(int i = 0; str[i]!='\0'; i++)  // need more explanation!
    {
    	if(str[i] == letter)
          count++;
    }
     
    //Displaying the result
	printf("The value '%c' has occurred %d time in the string \n ", letter, count);
     
    return 0;
}

/*
Input String: my name is akash gupta
Input letter to be searched: a
The value 'a' has occurred 4 time in the string

[Program finished]
*/
	 

   

      
            
                        
            