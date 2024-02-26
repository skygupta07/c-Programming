#include <stdio.h>

int factorial(int n) //function definition
{
	if (n == 1) return 1;   // base case 
	return n * factorial(n - 1);
}



int main()
{
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	printf("factorial of %d is %d\n ", n, factorial(n));

	return 0;
}


/*
enter number: 7
factorial of 7 is 5040

[Program finished]
*/

