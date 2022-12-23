#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,remainder,sum=0,a=1;
	printf("Please enter a decimal number: ");
	scanf("%d",&n);
    while(n>0)
    {
	    remainder=n%2;
	    sum=sum+remainder*a;
        n=n/2;
        a=a*10;
	}
	printf("Binary number is=  %d\n",sum);
	printf("Please read right to left!!");
	return 0;
}

