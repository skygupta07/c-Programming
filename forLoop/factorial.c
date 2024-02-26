#include <stdio.h>
int factorial(int x);
int main()
{
	int n;
	printf("enter number: ");
	scanf("%d", &n);
	int fact = factorial(n);
	printf("factorial of %d is %d\n ", n, fact);

    // // better option while using function calls is: 
    // 1. function ka return type aap int hi rakh lo
    // 2. wah par int return kardo..
    // 3. main function me aake kisi variable me value ko store kar lo 
    // 4. then %d ka use karko us variable ko print karwalo...

	return 0;
}

int factorial(int x)
{
	int prod = 1;
	for (int i =1; i<=x; i++)
	{
		prod = prod * i;
	}
	return prod;
}

/*
enter number: 8
factorial of 8 is 40320

[Program finished]
*/
