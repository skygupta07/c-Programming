#include <stdio.h>
int main(){
	int n;
	int flag = 0; // means number is prime..

	printf("enter a number: ");
	scanf("%d", &n);

	for (int i = 2; i<n; i++)
	{
		if (n % i == 0)
		{
			flag = 1;  // means number is composite..
			break;
		}
	}
	if (flag == 0)
	{
		printf("number is prime ");
	}

	else
	{
		printf("number is composite");
	}

	return 0;
}
