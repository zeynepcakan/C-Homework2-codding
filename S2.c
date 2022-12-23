#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	float x1,x2,d;
	
	printf("****Roots of Quadratic Equation****\n\n");
	
	printf("Please enter a:  "); scanf("%d",&a);
	printf("Please enter b:  "); scanf("%d",&b);
	printf("Please enter c:  "); scanf("%d",&c);
	printf("\n");
	
	printf("Equaation: %dx^2+%dx+%d   \n\n",a,b,c);
	
	d=b*b-4*a*c;
	printf("d= %f\n",d);
	
	if(d>=0){
		printf("Equation has two roots:  \n");
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		printf("x1= %f\n",x1);
		printf("x2= %f",x2);
	}
	else if (d==0){
		x1=-b/2*a;
		printf("x1=x2= %f",x1);
	}
	else{
		printf("no real roots ");
	}
		
	return 0;
}

