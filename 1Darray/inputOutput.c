#include <stdio.h>
int main()
{
	int arr[4];
	printf("enter 4 elements of the array: ");
	for (int i = 0; i <= 3; i++)
	{ 
		scanf("%d", &arr[i]);   // accha matlab scanf me hamesha hi aap &arr[i] 
                                    // mpercent operator '&' bheja karenge..
	}
	printf("elements of array  are: \n");
	for (int i = 0; i <= 3; i++)
	{
		printf("%d ", arr[i]);
	}
    printf("\n");

	printf("numbers in reverse order are: \n");
	for (int i = 3; i >= 0; i--)
	{
		printf("%d ", arr[i]);   // arrays ki indexing ka fayda uthaya 
	}
    printf("\n");

	return 0;
}

/*
enter 4 elements of the array 3
6
76
2
elements of array  are
3
6
76
2
numbers in reverse order are
2
76
6
3

[Program finished]
*/
