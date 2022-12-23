//C code to print all Prime numbers between 1 to n.

#include <stdio.h>
#include <math.h>

int main() 
{
    int n, i, j, is_prime;
    
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
            printf("%d is prime\n", i);
        }
    }

    return 0;
}

