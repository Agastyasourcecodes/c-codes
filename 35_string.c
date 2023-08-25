#include <stdio.h>

void printStr(char str[])
{    
   int i = 0;
   while (str[i] != '\0')
   { 
      printf("%c", str[i]);
      i++;
   }
   printf("\n");
}

int main()
{ 
   char str[34];
   fgets(str, sizeof(str), stdin);
   printf("using custom function printStr:\n");
   printStr(str);
   printf("using printf %s\n", str);
   printf("using puts:\n");
   puts(str);
   return 0;
}
