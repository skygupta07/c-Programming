#include <stdio.h>

//call by value me value nahi badalti
// call by value me directly value hi pass hoti hai...
void fun(int a); // function prototype...
int main()
{
	int a = 7;
	printf("value of a initially in main is %d\n", a);
	fun(a);
	printf("value of a after making changes in 'a' in fun function (call in main function) is %d\n", a);
	return 0;
}

void fun(int a)
{
	a = 6;
	printf ("printing in fun function i.e. value of a is %d\n", a);
	return;
}


/*
value of a initially is 7
printing in main function i.e. value of a is 6
value of a after making changes in 'a' in fun function is 7

[Program finished]
*/