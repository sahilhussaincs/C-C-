#include <stdio.h>

void displayString (char str[]);
int main()
{
    char str[50];
    printf("Enter String");
    fgets(str,Sizeof(str),stdin);
    dsiplaystring(str);
    return 0;


}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}