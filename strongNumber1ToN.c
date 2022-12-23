//C code to print all Strong numbers between 1 to n.

#include<stdio.h>  

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

int main()  
{  
    int result = 1, sum = 0;  
    int i, n, r;  
    
	printf("Enter the 'n' number: ");  
    scanf("%d",&n);  
    printf("\n Strong numbers are:\n ");  
    
	for(i=1;i<=n;i++)  
    {  
        int k = i;  
        while(k != 0)  
        {  
            r = k % 10;  
            result = factorial(r);  
            k = k / 10;  
            sum += result;  
        }  
        
		if(sum == i)
		{  
        	printf("%d ",i);           
        }  
           sum=0;  
    }  
    return 0;  
}  
  

