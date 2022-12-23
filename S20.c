#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//sum of the series: [x-x^3+x^5+...]
	
	int n,x,c=1,sum=0;
	
	printf("please enter the finally value: "); 
	scanf("%d",&n);
	
	printf("please enter the x value:  "); 
	scanf("%d",&x);
	
	while(c<=n)
	{
		if(c==3)
		{
			sum=sum+(-x^3);
		}
		else
		{
			sum=sum+x^c;
		}
		c=c+2;
	}
	printf("sum=  %d",sum);

	return 0;
}
