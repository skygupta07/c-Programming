#include <stdio.h>
int main()
{
	int arr[] = {3, 4, 7, 8, 9};
	printf("initially  array is:  ");
	for (int i = 0; i <5; i++)
	{
		printf("%d  ", arr[i]);
	}

	for (int i = 0; i <5; i++)
	{
		if (i % 2 == 0)  //even index walo ko 10 se badha do
		{
			arr[i] += 10;
		}
		else
		{       
			arr[i] *= 2;   // odd walo ko double kar do
		}
	}
	printf("\nnew modified array is: ");
	for (int i = 0; i <5; i++)
	{
		printf("%d  ", arr[i]);
	}

	return 0;
}

/*
initially  array is:  3  4  7  8  9
new modified array is: 13  8  17  16  19
[Program finished]
*/


