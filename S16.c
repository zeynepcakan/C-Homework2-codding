#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int n,factor=1,x;
	float a,sum1=0,sum2=0,sum=1;
	int i,j;
	
	printf("Please enter the finally value:  ");
	scanf("%d",&n);
	printf("Please enter the x value:  ");
	scanf("%d",&x);
	
	
	for(i=0;i<=n;i+=2)
	{
	    for(j=1;j<=i;j++)
	    {
	    	factor=factor*j;
	    }
		a=i/factor;
		if(i%4==0)
		{
			sum1=sum1+pow(x,a);
		}
		else
		{
			sum2=sum2-pow(x,a);
		}
	}
	sum=sum1+sum2;
	printf("sum= %f",sum);
    return 0;
}
