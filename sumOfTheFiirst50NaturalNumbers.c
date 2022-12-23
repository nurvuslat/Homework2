//C code to find the sum of the first 50 natural numbers

#include <stdio.h>

int main()
{
	int i, sum = 0;
	
	for (i=1; i <= 50; i++)
	{
		sum += i;
	}
		printf("The sum of the first 50 natural numbers is %d\n", sum);
		
	return 0;	
	
}
