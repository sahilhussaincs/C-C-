#include <stdio.h>

int main()
{
    char name[20];

    fgets(name,Sizeof(name),stdin);
    printf("Name:");
    puts(name);
    return 0;
}
