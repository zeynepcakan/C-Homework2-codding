#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//find the num and sum all int between 100to200 which are divisible by 9.
	
	int sum,c,x;
	sum=0;
	c=0;
	
	for(x=100;x<=200;x++)
	{
		if(x%9==0)
		{
			sum=sum+x;
			printf("%d,",x);
			c++;
		}
	}
	printf("There are %d and their sum is %d .",c,sum);
	return 0;
}
