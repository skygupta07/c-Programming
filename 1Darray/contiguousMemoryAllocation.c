#include <stdio.h>
int main()
{
	int arr[] = {23, 56, 78, 82};
	printf("%p\n", &arr[0]); // %u means unsigned integer, simpy bole to variable ke address ko
							 //integer format me show karta h
	printf("%p\n", &arr[1]);
	printf("%p\n", &arr[2]);
	printf("%p\n", &arr[3]);

    // format specifiers: 
    // %d for int
    // %f for float 
    // %c for char
    // %p for address
    // %u for unsigned integer or address in integer format

	return 0;
}

/*
3533801580
3533801584
3533801588
3533801592

[Program finished]
matlab integers are taking 4 bytes 

*/
