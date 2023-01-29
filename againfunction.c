#include <stdio.h>
int sum(int a, int b);



int main()
{
    int a,b;
    printf("Enter First Number");
    scanf("%d",&a);
    printf("Enter Second Number");
    scanf("%d",&b);
    int z= sum(a,b);
    // int sum= a+b;
    // printf("Here is the Result %d",sum);
    printf("Here is the Result %d",z);
    return 0;

}

int sum(int a, int b)
{
    return a+b;
}