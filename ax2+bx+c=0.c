//C code to find all the roots of a quadratic equation ax2+bx+c=0.

#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;

	printf("Enter the value of a: ");
	scanf("%lf", &a);
	
	printf("Enter the value of b: ");
	scanf("%lf", &b);
	
	printf("Enter the value of c: ");
	scanf("%lf", &c);

  	double discriminant = b * b - 4 * a * c;
 	
	if (discriminant > 0) 
	{
    	double root1 = (-b + sqrt(discriminant)) / (2 * a);
    	double root2 = (-b - sqrt(discriminant)) / (2 * a);
   		
			printf("The roots of the equation are %lf and %lf.\n", root1, root2);
  	} 
  	
	else if (discriminant == 0) 
	{

    	double root = -b / (2 * a);
    		
			printf("The root of the equation is %lf.\n", root);
	} 
  	
	else 
	{
		double real = -b / (2 * a);
    	double imag = sqrt(-discriminant) / (2 * a);
    
			printf("The roots of the equation are %lf + %lfi and %lf - %lfi.\n", real, imag, real, imag);
  	}

  	return 0;
		
}

