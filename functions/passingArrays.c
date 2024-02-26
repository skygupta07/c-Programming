#include <stdio.h>

void fun(int *arr);
//passing arrays to function, matlab by default hi arrays pass by REFerence se hi hoti h pass functions me, tabhi uski value change ho gayi
// int *arr or arr[] both can be passed..
int main()
{
	int arr[] = {4, 7, 3, 78, 47};
	printf("our array is: ");
	for (int i = 0; i <5; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	printf("initially first element of the array is  %d\n", arr[0]);
	fun(arr);
	printf("first element of the array after making changes in array using fun function is %d\n", arr[0]);

	return 0;
}

void fun(int *arr)
{ //abc
	arr[0] = 15;
	return;     // kewal return  use kiya kyuki fn ka return type hi void h. 
}

/*
our array is: 4  7  3  78  47
initially first element of the array is  4
first element of the array after making changes in array using fun function is 89
[Program finished]
*/