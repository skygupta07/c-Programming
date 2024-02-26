#include <stdio.h>

int main()
{
	int arr[] = {1, 9, 3, 4, 6, 5, 8, 2};
	int target = 10;
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 1; j < 8; j++)
		{
			int sum = arr[i] + arr[j];
			if (target == sum)
			{
				printf("(%d,%d)\n ", arr[i], arr[j]);
				count = count + 1;
			}
		}
	}
	printf("number of pairs in the array whose sum is equal to 10 is: %d ", count);

	return 0;
}

/*
(1 ,9 )
 (4 ,6 )
 (6 ,4 )
 (5 ,5 )
 (8 ,2 )
 (2 ,8 )
 number of pairs in the array whose sum is equal to 10 is: 6
[Program finished]
*/

