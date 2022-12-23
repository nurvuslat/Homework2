//C code to print all Perfect numbers between 1 to n.

#include <stdio.h>

int main() 
{
  int i, j, number;
  printf("Enter a number: ");
  scanf("%d", &number);

  for (i = 1; i <= number; i++) 
  {
    int sum = 0;
    for (j = 1; j < i; j++) 
	{
      if (i % j == 0) 
	  {
        sum += j;
      }
    }
    if (sum == i) 
	{
      printf("%d is a perfect number\n", i);
    }
  }

  return 0;
}

