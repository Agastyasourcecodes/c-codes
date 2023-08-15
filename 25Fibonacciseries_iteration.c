#include<stdio.h>

int fib_recursive(int n)
{   int a =0;
    int b =1;

    for(int i=0;i<n-1; i++)
   { b=a+b;
    a=b-a;}
    return a;
}
int main()
{ int number;
printf("enter index to get fibonacci number");
scanf("%d",&number);
printf("the value of fibonacci number at position no %d using iterative approach is %d\n",number);

 return 0;

}