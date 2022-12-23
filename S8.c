#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j,end,prime;
	int sum=0;
	
	printf("Please enter finally value:");
	scanf("%d",&end);
	
	printf("All prime numbers between 1 to %d : \n",end);
	
	// 2 is first prime number
	
	for(i=2;i<=end;i++)
	{
		prime=1;
		
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
		      	prime=0;
			    break;
	    	}
		}
	    if(prime==1)
	    {
		    printf("%d, ",i);
		   
	        sum=sum+i;
        }
    } 
    printf("\n");
	printf("Sum=%d",sum);
 
	return 0;
}
