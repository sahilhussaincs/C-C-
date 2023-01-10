#include <stdio.h>
#include <math.h>

int main()
{
    int charday;
    
    printf("Enter Your character: \n");
    scanf("%c",& charday);
    
    switch(charday){
        case 'M' :printf("Monday");
        break;
        case 'T' :printf("Tue");
        break;
        case 'W' :printf("Wed");
        break;
        case 'U' :printf("Thus");
        break;
        case 'F' :printf("Friday");
        break;
        case 'S' :printf("Saturday");
        break;
        case 'a' :printf("Sunday");
        break;
        
        

    }
    return 0;

}