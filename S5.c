#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,con=1;
	
	for(i=1;i<=4;i++)
	{
		con=con*2;	
	}
	printf("2^4= %d",con);
	
	return 0;
}
