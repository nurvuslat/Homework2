//C code to check whether a number is Strong number or not.

#include <stdio.h>

int factorial(int n)
{
    int result = 1;
    int i;
   
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int isStrongNumber(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    return sum == original;
}

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (isStrongNumber(n))
    {
        printf("%d is a Strong Number\n", n);
    }
    else
    {
        printf("%d is not a Strong Number\n", n);
    }

    return 0;
}

