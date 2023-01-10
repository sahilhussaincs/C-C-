#include <stdio.h>
#include <math.h>
void main()
 {
    int i,ctr;
    int cubee;
    printf("Input number of terms : ");
    scanf("%d", &ctr);
    for(i=1;i<=ctr;i++)
    {
        cubee=pow(i,3);
        printf("Number is : %d and cube of the %d is :%d \n",i,i,cubee);     
    }
 }