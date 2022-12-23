#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("***Sum of the First 50 Natural Numbers***\n\n");
	
	int i,sum=0;
	
	for(i=0;i<50;i++)
	{
		printf("Number %d -->  %d \n",i,i);
		sum=sum+i;
	}
	printf("\n\n");
	
	printf("Sum= %d",sum);
	
	
	
	
	
	
	
	
	
	return 0;
}
