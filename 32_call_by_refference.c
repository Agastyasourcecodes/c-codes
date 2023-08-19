#include<stdio.h>
void addAndsubtract(int*a,int*b) 
{int sum=  *a + *b  ;
int difference= *a - *b;

*a=sum;
*b=difference;
}
int main(){
   
   int a=3;
   int b=4;

addAndsubtract(&a ,&b);
 printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}




