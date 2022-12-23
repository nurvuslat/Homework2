//C code to find LCM of two numbers.

#include <stdio.h>

int main() 
{	
    int i, a, b, max_val, lcm;
    
	printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max_val = (a > b) ? a : b;
    lcm = 1;

    for ( i = 1; i <= max_val; i++) 
	{
        if (i % a == 0 && i % b == 0) 
		{
            lcm = i;
            break;
        }
    }

    printf("The LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

	
	
	
	
	
	



