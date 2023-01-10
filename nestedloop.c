#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    int table = 2;
    int max = 5;

    for(i=0; i<=table; i++)
    {
       for(j=0; j<=max; j++)
       {
        printf("%d*%d=%d\n",i,j,i*j);
       }

       printf("\n");
    }
    return 0;
}