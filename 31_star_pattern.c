#include <stdio.h>
void starpattern(int rows)
{  
    for(int i=0;i<rows;i++)
     {
       for(int j=0;j<i;j++)
     
    {printf("*");}
    
    printf("\n");
   
}      }

void reversestarpattern(int rows)

{ 
    for (int i=0;i<rows;i++)
      {
        for(int j=0;j <=rows-i-1;j++)
      
    { printf("*");}
    printf("\n");
  } }

  int main()
  {
    int rows,type;
        printf("enter 0 for star pattern 1 for inverted star pattern\n");
        scanf("%d",&type);
       printf("how many rows do u want\n");
      scanf("%d",&rows);
 switch(type)

     {case 0:
      starpattern(rows);
      break;

      case 1:
      reversestarpattern(rows);
      break;
}  

return 0;
           }