//C code to check whether a number is Armstrong number or not.

#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int num_digits = 0;
    int temp = n;
    while (temp > 0) 
	{
        num_digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp > 0) 
	{
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    if (sum == n) 
	{
        printf("%d is an Armstrong number\n", n);
    } 
	else 
	{
        printf("%d is not an Armstrong number\n", n);
    }

    return 0;
}

