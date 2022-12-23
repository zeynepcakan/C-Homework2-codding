#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("***Floyd's Triangle***\n\n");
	
	int s,i,num;
	int j;
	
	printf("please enter the step number:  "); scanf("%d",&s);
	
	i=1;
	num=0;
	
	while(i<=s)
	{
		j=1;
		while(j<=i)
		{
			if(num==0)
			{
				num=num+1;
				printf("%d",num);
			}
			else
			{
				num=num-1;
				printf("%d",num);
			}
			j++;
		}
		i++;
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
