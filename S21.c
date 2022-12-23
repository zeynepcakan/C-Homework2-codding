#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1+11+111+1111+...+n;
	
	int n;
	int t=1,sum=0,c;
	
	printf("please enter digit of last value:  ");
	scanf("%d",&n);
	c=1; 
	while(c<=n)
	{
		if(c==n)
		{
			sum=sum+t;
		    printf("%d=",t);
	    	t=(t*10)+1;
		}
		else if(c==1)
		{
			sum=sum+t;
	    	t=(t*10)+1;
			printf("1+");
		}
		else
		{
			sum=sum+t;
			printf("%d+",t);
		    t=(t*10)+1;
		}
		c++;
	}	
	printf(" %d",sum);
	return 0;
}

