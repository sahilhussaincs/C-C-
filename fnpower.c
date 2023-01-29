#include <stdio.h>
#include <math.h>


void power(int n);

int main()
{
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    
    power(n);
    return 0;
}

void power(int n)
{
    return n*n;
}