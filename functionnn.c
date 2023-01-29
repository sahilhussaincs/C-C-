#include <stdio.h>

int largest(int arr [], int size)
{
    int largest=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]>largest)
        largest = arr[i];
        return largest;

    }
    int main();
    {
        int size;
        printf("Enter Sixe of An Array: \n");
        scanf("%d",&size );
        int arr[size];

        printf("Enter Array Elements:");
        for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
        printf("Largest Element is: %d",largest(arr,size));
        return 0;
        
    }
    
}