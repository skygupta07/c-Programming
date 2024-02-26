//2
/*Write a C program to enter the radius of circle/sphere and compute its (i) Perimeter (ii)
Area and (iii) Volume   */
#include <stdio.h>
int main()
{
	float r;
	float pi = 3.14159;

	printf("enter the radius: ");
	scanf("%f\n", &r);
	printf("radius input is: %f\n", r);
	float perimeter = 2 * pi * r;
	float area = pi * r * r;
	float volume = (4 / 3) * pi * r * r * r;
	float surface_area = 4 * pi * r * r;
	printf("the perimeter of circle is: %f\n", perimeter);
	printf("the area of circle is: %f\n", area);

	printf("the volume of sphere is: %f\n", volume);
	printf("the surface area of sphere is: %f\n", surface_area);

	return 0;
}

/*
enter the radius: 6
7
radius input is: 6.000000
the perimeter of circle is: 37.699081
the area of circle is: 113.097244
the volume of sphere is: 678.583496
the surface area of sphere is: 452.388977

[Program finished]
*/