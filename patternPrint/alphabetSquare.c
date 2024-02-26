//alphabet square

#include <stdio.h>
int main()
{
	int n, i, j;
	printf("enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int a = 1;   // taki har new line ki suruaat A se hi ho...
		for (j = 1; j <= n; j++)
		{
			int d = a + 64;
			char ch = (char)d;   // typecasting i.e. changing integer to character

			printf("%c ", ch);
			a++;
		}

		printf("\n");
	}

	return 0;
}

/*output

enter n: 5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

[Program finished]
*/

