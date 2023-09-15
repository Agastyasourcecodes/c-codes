#include<stdio.h>

int myfunc()
{
  static int i=0;
  i++;
  return i;
}

int main ()
{
  printf("value:%d\n",myfunc());
  printf("\nvalue:%d\n",myfunc());

return 0;
}