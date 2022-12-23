#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {

    int A, B, hcf, lcm,z,num1,num2;

    printf("Please enter 1. number= "); scanf("%d",&A);
	printf("Please enter 2. number= "); scanf("%d",&B);
    z=A*B;
    num1=A;
    num2=B;

while(A!=B)
	{
		if(A>B)
			A=A-B;
		else
			B=B-A;
	}
	printf("HCF=%d\n",A);
	
	hcf=A;
	
    lcm = z / hcf;

    printf("The LCM of %d and %d = %d.", num1, num2, lcm);
    return 0;
}
