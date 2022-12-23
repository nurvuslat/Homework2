//C code that will read the two sides of a rectangle and calculate its area and perimeter.

#include <stdio.h>

int main()
{
	int edge1, edge2, area, perimeter;
	
	printf("Enter a Edge: ");
	scanf("%d", &edge1);
	
	printf("Enter a Edge: ");
	scanf("%d", &edge2);
	
		area = edge1 * edge2;
		perimeter = 2 * (edge1 + edge2);
	
			printf("Area : %d\n", area);
			printf("Perimeter : %d", perimeter);

	return 0;
	
}
