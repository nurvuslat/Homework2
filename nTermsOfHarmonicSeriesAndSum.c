//C code to display the n terms of harmonic series and their sum. (1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms)

#include <stdio.h>

int main()
{
    int n, i;
    double s = 0.0;

   	printf("Enter a natural number: ");
   	scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s += 1.0 / i;
    }

   	printf("The result of the formula is: %.2lf\n", s);

    return 0;
}

