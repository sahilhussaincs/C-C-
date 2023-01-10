#include <stdio.h>
#include <math.h>

int main ()
{
    int n,i,sum=0;
    float avg;

    for(i=1; i<10; i++)
    {
    printf("Numbers: ",n);
    scanf("%d\n",&n);

    sum+=n;
    }
    avg=sum/10.0;
    printf("Sum %d and Avg %f\n : ",sum,avg);

    return 0;
}