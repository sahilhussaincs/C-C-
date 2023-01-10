#include <stdio.h>

void sum(int,int);
void main()
{
    int a,b,result;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    sum(a,b);

}
void sum(int a, int b)
{
    printf("Sum = %d",a+b);
}