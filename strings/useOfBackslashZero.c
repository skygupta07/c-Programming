// without counting length of string, how to print the whole string

#include <stdio.h>
int main()
{
	int i = 0;
	char arr[] = "hello everyone I am from India. "; // string is basically a character array.
	arr[3] = 'p';
	while (arr[i] != '\0')
	{						  //imp
		printf("%c", arr[i]); // format specifier %c is used to print character
		i++;
	}

	return 0;
}