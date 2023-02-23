#include <stdio.h>

void main()
{
    int array[100];
    int i, n, new, pos;

    printf("Enter the number of elementd\n");
    scanf("%d",&n);
    printf("Enter the elements\n");

    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);

    }
    printf("Input Array Element are : \n");
    for(i = 0; i<n; i++)
    {
        printf("%d",array[i]);

    }
    printf("enter new element to be insert:");
    scanf("%d",&new);
    printf("Enter the position where element is to be inserted :");

    n=n+1;
    for(i=n-1; i>=pos; i--)
    array[i]=array[i-1];

    array[pos-1]=new;
    for(i=0; i<n; i++)
    {
        printf("%d",array[i]);
    }

}