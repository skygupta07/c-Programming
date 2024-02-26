#include <stdio.h>
int sum(int x); //function prototype
int main()
{
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	int s = sum(n); // using function
	printf(" sum from 1 to %d is: %d\n ",n,  s);

	return 0;
}

int sum(int n) //function definition
{
	if (n == 0) return 0;  //base case
	return n + sum(n - 1);   // logic : sum(n)= sum(n-1) + n
}


/*
enter number: 9
 sum from 1 to 9 is: 45

[Program finished]
*/

