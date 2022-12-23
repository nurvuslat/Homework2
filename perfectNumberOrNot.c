//C code to check whether a number is Perfect Number or not.

#include <stdio.h>

int main()
{
    int i, number;
    int sum = 0;
     
    printf("Enter a Number: ");
    scanf("%d",&number);
     
	    for(i = 1; i < number; i++)
	    {
	        if(number % i == 0){
	            sum += i;                   
	        }
	    }
		    if(number == sum)
			{
		        printf("%d is a Perfect Number.",number);
		    }
		    else
			{
		        printf("%d is not a Perfect Number.",number);
		    }
	return 0;	
}
