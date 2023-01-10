#include <stdio.h>

int sum();
void main()
{
    int result;
    
    printf("Going to Find sum With Retuen Value:\n");
    result= sum();
    printf("%d",result);

}
int sum()
{
    int a,b;
    printf("Enter any Two Numbers:\n ");
    scanf("%d %d",&a,&b);
    return a+b;

}