#include <stdio.h>
int main (){
	char arr[5]= {'a', 'k', 'a', 's','h'};
	printf ("%c\n", arr[4]);
	printf ("%p\n", &arr[0]);
	printf ("%p\n", &arr[1]);
	printf ("%p\n", &arr[2]);

    printf("\n");
	
	
	
	char ch ='b';
	printf ("%c\n", ch);
	printf ("%d\n", ch);  
    printf("\n");  //integer wala format specifier use kiya to b ki ascii value return kar diya  	
	
	char c ='6';
	printf ("%c\n", c);  
	printf ("%d\n", c);
	
	char a= 'n';
	printf ("%c", a);    
	return 0;
}

/*
h
3723440631
3723440632
3723440633
b
98
6
54
n
[Program finished]
*/

