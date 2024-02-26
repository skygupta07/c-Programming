// 13. Write a program to find the HCF of two integers entered by the user

#include <stdio.h>
int min (int n1,int n2){
	if (n1<n2)
	return n1;
	else 
	return n2;
}


int hcf(int n1, int n2)
{
    int minimum = min (n1,n2);
    int hcf=1;  //agar coprime number hue to chup chap hcf 1 ho jaega    
    for(int i=1; i<=minimum; i++)
    {
        if (n1%i==0 && n2%i==0)  // agar i dono numbers ka factor ho to hcf me daal do.
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
	int n1,n2;
	printf ("enter two numbers to find their hcf: ");
	scanf ("%d", &n1);
	scanf ("%d", &n2);
	printf ("hcf of %d and %d is %d\n", n1, n2, hcf(n1,n2));
	
	return 0;
}

/*
enter two numbers to find their hcf: 5
25
hcf of 5 and 25 is 5
[Program finished]
*/

