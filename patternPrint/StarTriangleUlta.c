#include <stdio.h>
int main()
{
	int n, i, j, a;
	printf("enter n:");
	scanf("%d", &n);
	a = n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= a; j++)
		{
			printf("* ");
		}
		a--;
		printf("\n");
	}

	return 0;
}


/*enter n:4
* * * *
* * *
* *
*

[Program finished] */