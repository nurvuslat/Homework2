//C code to find sum of all prime numbers between 1 to n.

#include <stdio.h>
#include <math.h>

int main() 
{
   int n, i, j, is_prime, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) 
	{
        is_prime = 1;

        for (j = 2; j <= sqrt(i); j++) 
		{
            if (i % j == 0) 
			{
                is_prime = 0; 
                break;
            }
        }

        if (is_prime) 
		{
			sum += i;
            printf("%d\n", i);
        }
    }
    	printf("Sum = %d", sum);

    return 0;
}

