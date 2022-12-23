#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
    int num, binary_num, decimal_num = 0, base = 1, rem;  
    printf (" Enter a binary number with the combination of 0s and 1s :  ");  
    scanf (" %d", &num); 
  
    binary_num = num; 
      
      
    while ( num > 0)  
    {  
        rem = num % 10;
        decimal_num = decimal_num + rem * base;  
        num = num / 10;
        base = base * 2;  
    }  
  
    printf ( " The binary number is %d \t", binary_num); 
    printf (" \n The decimal number is %d \t", decimal_num); 
		
	return 0;
}
