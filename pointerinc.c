#include <stdio.h>

int main(){

    int *pc,c,d;
    c=5;
    d=15;
    pc=&c;
    pc=&d;
    printf("%d\n",*pc);
    printf("%d",*pc);

    return 0;
}