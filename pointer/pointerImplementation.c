/*#include <stdio.h>

int main(){
	int age = 22;
	int *ptr = &age;
	int _age = *ptr;  //22
	
	printf ("%u\n", &age );  // %u
	printf ("%u\n", ptr); 
	printf ("%u\n", &ptr);   //%u for unsigned integer 
	
	return 0;
}


3442910984
3442910984
3442910976


[Program finished]

*/

#include <stdio.h>
int main()
{
	int age = 22;
	int *ptr = &age; // ptr variable hai jo address ko store karta hai..
                    // wo to uski khaasiyat hai ki uske liye * ka use karna padta hai for distinguishing..
	int _age = *ptr;

	printf("%d\n", _age);	 //22
	printf("%d\n", *ptr);	 //22
	printf("%d\n", *(&age)); //22
	printf("%p\n", ptr);
	printf("%p\n", &age); // %p is a format specifier to print address of a variable

	return 0;
}

/*
22
22
22
0x7fc07fdf58
0x7fc07fdf58

[Program finished]
*/

