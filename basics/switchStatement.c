#include <stdio.h>
int main()
{
	printf("im going to use switch statement\n ");
	int day;
	printf("enter day as 1,2,3:");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("monday\n");
		break;

	case 2:
		printf("tuesday\n");
		break;

	case 3:
		printf("wednesday \n");
		break;
	}
	return 0;
}
