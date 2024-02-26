/* 14.) Write a program using
do…while loop to calculate and print the first n Fibonacci number   */

#include <stdio.h>
int main()
{
	int n;
	int i = 1;
	printf("enter number of fibonacci terms needed:");
	scanf("%d", &n);
	int f = 0;
	int f1 = 1;
	int f2 = 1;
	do
	{
		i++;
		f1 = f2;
		f2 = f;

		f = f1 + f2;
		printf("%d ", f);
	}
    while (i <= n);
	return 0;  // for satisfying main function...
    printf("\n");
}



/*
enter number of fibonacci terms needed:8
1
1
2
3
5
8
13
21

[Program finished]
*/


