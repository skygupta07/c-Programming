#include <stdio.h>
int main()
{
	int n, i, j;
    int a=1;  //a ko sabhi loop ke bahar declare kiya taki value update hoke badhti hi rahe..
	printf("enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", a); //a ko hi print kar do
			a++;			  // a ko badhate bhi chalo
		}
		printf("\n");
	}

	return 0;
}

/*
output
enter n: 7
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28

[Program finished]


*/
