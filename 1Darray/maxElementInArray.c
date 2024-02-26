#include <stdio.h>

int main()
{
	int arr[5] = {2, 5, 7, 24, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
	printf("elements of the array is: ");
	for (int i = 0; i<n; i++){
		printf("%d  ", arr[i]);   // printing array
	}
    
	int max = arr[0]; //important assumption
	for (int i = 0; i<n; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	printf("\nmaximum element in this array is: %d ", max);

	return 0;
}

/*
elements of the array is: 2  5  7  24  1
maximum element in this array is 24
[Program finished]
*/



