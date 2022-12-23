#include <stdio.h>

int main()
{
    int i, j, end;
    int prime;

    printf("Enter finally limit: "); scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n",end);

    // 2 is first prime number

    for(i=2; i<=end; i++)
    {
        prime = 1; 

        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
        }
        if(prime==1)
            printf("%d, ", i);
    }

    return 0;
}
