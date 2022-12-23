#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1+x+x^2/2!+x^3/3!...
	
	int x;
	float sum=0,a;
	int i,j,n,factor;
	
    printf("please enter a finally value: "); scanf("%d",&n);
    printf("please enter a x value:  "); scanf("%d",&x);
    
    for(i=1;i<=n;i++)
    {
    	factor=1;
    	for(j=1;j<=i;j++)
    	{
    		factor=factor*j;
		}
		a=i/factor;
		sum=sum+pow(x,a);
	}
	printf("Sum= %f",sum);
	return 0;
}

