#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b;
	int area,rectangle;
	
	
	printf("****Area and Perimeter of a Rectangle****\n\n");
	
	printf("Please enter the long pair:  ");
	scanf("%d",&a);
	
	printf("Please enter the short pair:  ");
	scanf("%d",&b);
	
	area=a*b;
	printf("Area=  %d\n",area);
	
	rectangle=(a+b)*2;
	printf("Rectangle=  %d",rectangle);
	
	
	return 0;
}

