#include<stdio.h>

void ptrfunc(int *ptr)
{
    *ptr = 8;
}

int main()
{
    int x = 5;

    printf("x=%d\n", x);
    ptrfunc(&x); 
    printf("x=%d", x);

    return 0;
}
