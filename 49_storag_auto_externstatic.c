#include <stdio.h>
int myfunc(int a, int b)
{

    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);
    return myVar;
}

int main()
{
   
    register int myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);
    myVar = myfunc(3, 5);

    return 0;
}