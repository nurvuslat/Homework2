//C code to print all Armstrong numbers between 1 to n.

#include <stdio.h>
#include <math.h>

int main()
{
	int i, n;
	printf("Enter a Number:");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		int num_digits = 0;
		int temp = i;
	
			while (temp > 0)
			{
				num_digits++;
				temp /= 10;
			}
	
		int sum = 0;
		temp =  i;
		
			while (temp > 0)
			{
				int digit = temp % 10;
				sum += pow(digit, num_digits);
				temp /= 10;
			}
		if (sum == i)
		{
			printf("%d is an Armstrong Number\n", i);
		}
	
	
	}
	return 0;
}

