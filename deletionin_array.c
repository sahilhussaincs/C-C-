#include <stdio.h>

int main()
{
    int array[100], position, i, n;
    printf("Enter number of elements in array: \n");
    scanf("%d",&n);
    printf("enter element");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);


    }
    printf("Enter The location where you wish to delete the array");
    scanf("%d",&position);
    if (position>=n-1)
    {
        printf("Deletion is not possible");

    }
    else{}
    for(i=position-1; i<=n-1; i++)
    array[i]=array[i+1];
    printf("Resultant array: \n");
    for(i=0; i<n; i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
