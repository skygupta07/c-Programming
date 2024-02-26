#include <stdio.h>
// print n to 1
void printnum(int n);
int n;
int main()
{
	printf("enter n: ");
	scanf("%d", &n);
	printnum(n);

	return 0;
}

void printnum(int n)
{
	if (n == 0) return;  // base case 
	printf("%d ", n); // only line changed 
                        // i.e. pehle hi num n ko print karwaya then previous number ko
                        // function me bheja...
	printnum(n - 1);
	return;
}

