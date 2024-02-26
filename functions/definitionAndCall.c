#include <stdio.h>
void greet();  // function prototype, compulsory to write here when you are writing your functions below the main function
int main()
{
	printf("in main\n");
	greet();   // function call
	printf("in main after using function call");
	return 0;
}

void greet()      //function definition
{
	printf("namaste !\n");
	return;
}



/*
in main
namaste !

[Program finished]
*/