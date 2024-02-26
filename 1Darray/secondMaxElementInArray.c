#include <stdio.h>
// first find max and then secondmax by applying double condition..

int main(){
	int arr[] = {2, 5, 6, 1, 3, 4};
	int max = arr[0];
	
	printf("the given array is:");
	for (int i=0; i<6; i++){
		
		printf (" %d", arr[i]);
	}
	printf ("\n\n");
	for (int i = 0; i<6; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
    
	printf("maximum value of the array is %d\n", max);
    int smax = arr[0];
	for (int i = 0; i <= 5; i++)
	{
		if (arr[i] > smax && arr[i] != max)  // pehle maximum find kar liya aur ab yeh dhyan rakh rahe h ki search karte waqt maximum 															//wala na interfere kare 	
		smax = arr[i];
	}
	printf("\nsecond maximum value is %d\n", smax);

	return 0;
}

/*
the given array is: 2 5 6 1 3 4
maximum value of the array is 6
second maximum value is 5
[Program finished]
*/
