
#include <stdio.h>

int main()
{
    int i, j, num, lastDigit, end;
   int fact, sum;


    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Strong numbers between 1 to %d are:\n", end);

    for(i=1; i<=end; i++)
    {

        num = i;

        sum = 0;

        while(num > 0)
        {
            fact = 1;
            lastDigit = num % 10;

            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

           num /= 10;
        }
        
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
