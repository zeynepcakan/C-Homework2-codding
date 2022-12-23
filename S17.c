#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	//Harmonic series
	
	
	float x,sum,i,n;
	
	
	printf("please enter the finally value:  ");
	scanf("%f",&n);

	for(i=1;i<=n;i++)
	{
		x=1/i;
		sum=sum+x;
	}
	printf("Sum of the series= %f",sum);

	return 0;
}

