//C code to calculate 2^4.

#include <stdio.h>
#include <math.h>

int main(void)
{
	int base = 2, exponent = 4;
	double result;
	
	result = pow(base, exponent);
	
	printf("%d to the power of %d is %lf.\n", base, exponent, result);
	
	return 0;
}
