#include <stdio.h>

int main()
{
	char str[50]; // character array is string
	printf("enter a string: ");
	fgets(str, 50 ,stdin); // just like scanf
    // fgets(name of string, size of string, stdin)  
	printf("string input is: ");
	puts(str); // just like printf , plus ye ek last me enter aur maar deta h

	return 0;
}

/*
enter a string: i live in India
string input is: i live in India

[Program finished]
*/
