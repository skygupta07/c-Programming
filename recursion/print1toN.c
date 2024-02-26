#include <stdio.h>
// print 1 to n
void increasing(int n);
int n;
int main()
{
	printf("enter n: ");
	scanf("%d", &n);
	increasing(n);

	return 0;
}

void increasing(int n)
{
	if (n == 0) return;
    increasing(n - 1); //abhi theek se ye wali statement execute hi nahi hui thi ki jab tak n-1 wale function ko call laga diya
	
    printf("%d ", n); // only line changed  ye yahi backtracking jab hogi tab n se leke 1 tak number print ho jaega..
	return;
}

/*
enter n: 10
1 2 3 4 5 6 7 8 9 10 % 
*/

