#include <stdio.h>
#include <string.h>
  

int main()
{
  char example[100]; 
  
    strcpy(example, "hello");
    strcat(example, "world");
    printf("%s\n", example);
  
    return 0;
}
