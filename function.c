#include <stdio.h>

void sum();
void main()
{
    printf("Going to Calculate Sum of Number: \n");
    sum();

}
void sum()
{
    int a,b;
    printf("Enter Any Two Numbers:");
    scanf("%d%d",&a,&b);
    printf("The sum is %d",a+b);

}

