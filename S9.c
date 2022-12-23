#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("****Check whether a number is Armstrong or not****\n\n");
	
    int n,r,sum=0,temp;
    
    printf("Please enter the number:  "); 
	scanf("%d",&n);
    
    temp=n;
    
    while(n>0)
    {
    	r=n%10;    
        sum=sum+ (r*r*r);    
        n=n/10;    
	}
	if(temp==sum)
	{
		printf("%d is an Armstrong number",temp);
	}
	else
	{
		printf("%d is not an Armstrong number",temp);		
	}
	return 0;
}

