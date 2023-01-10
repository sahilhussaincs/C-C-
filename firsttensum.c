#include <stdio.h>
#include <math.h>

int main ()
{
    int num, i, sum=0;
    
    printf("Enter value of N : \n");

    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
    printf("%d\n",i);
    
    
    sum = sum+i;
    }
    printf("Sum of natural Number is : %d",sum);

    return 0;

}