#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j,M[3][3];
    printf("Enter Element of 3*3 Matrix: \n");
    for(i=0; i<3; i++)
    for(j=0; j<3; j++);
        {
        printf("M[%d][%d]=",i,j);
        scanf("%d",&M[i][j]);

        }
    printf("The matrix represented by 3*3 2D array is : \n");
    for(i=0;i<3; i++)
    {
        printf("\n\t\t ");
        for(j=0; j<3; j++)
        {
            printf("%d",M[i][j]);

        }
    }
    return 0;
}