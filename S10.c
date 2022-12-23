#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("****Print All Armstrong Numbers between 1 to n****\n\n");
	
	int n,i,sum=0,temp,r;
	
	printf("Please enter the n:  ");
	scanf("%d",&n);

	
	for(i=1;i<=n;i++)
	{
		temp=i;
		
		while(temp!=0)
		{
			r=temp%10;
			sum=sum+pow(r,3);
			temp=temp/10;
		}
		if(sum==i)
	        printf("%d, ",i);

	}
	return 0;
}
