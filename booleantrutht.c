#include <stdio.h>

int main()
{
    int a, b, temp, i;
    printf("\t A B A.B A+B A'\n");
    for(i=0; i<4; i++)
    {
        temp =i;
        a=i%2;
        temp/=2;
        b=temp%2;
        printf("\n\t %d %d %d %d %d\n",b,a,a&&b,a||b, !b);

    }
    return 0;
}