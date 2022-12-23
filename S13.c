#include <stdio.h>
#include <stdlib.h>


int main() {
	
	printf("*****Check the number is strong or not*****\n\n");
	
	int i,n,sum,j,fact;
	
	printf("please enter the number: ");
	scanf("%d",&n);
	printf("\n");
	
	sum=0;
	j=n;
	
	while (j>0)
	{
		fact=1;
		i=1;
	
		
		for(i=1;i<=j%10;i++)
		{
			fact=fact*i;
		}
	    sum=sum+fact;

		j=j/10;	
	}
	if(sum!=n)
	{
        printf("%d is not a strong number",n);
	}
	else
	{
	    printf("%d is a strong number",n);	
	}
	return 0;
}
