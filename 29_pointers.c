#include<stdio.h>
int main()
{
    printf("pointer basics\n");
    int a=76;
    int *ptra=&a;
    int *ptr2= NULL;
    printf("the addredd of pointer is %p\n,&ptra");
      printf("The Address of a is %p\n", (void *)&a); 
	printf("The Address of a is %p\n",ptra );
	printf("The Address of some garbage is %p\n",ptr2);
	printf("The Value of a is %d\n", *ptra );
	printf("The Value of a is %d\n", a );
	
return 0; }