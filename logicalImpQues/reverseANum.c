/* 11.) Given a number, write a program using while loop to reverse the digits of the number. For example number 
12345 should be written as 54321  */

#include <stdio.h>
int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	int rev = 0;
	while (n > 0)
	{
		rev = rev * 10;
		rev = rev + n % 10;
		n = n / 10;
	}
	printf("reverse number is: %d", rev);

	return 0;
}

/*
enter a number: 5678234
reverse number is: 4328765
[Program finished]
*/

