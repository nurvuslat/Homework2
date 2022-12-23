/*C code to print the Floyd's Triangle.
	1
	01
	101
	0101
	10101*/

#include <stdio.h>

int main()
{
    int rows, i, j, number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", number);
            number = 1 - number;
        }
        printf("\n");
    }

    return 0;
}

