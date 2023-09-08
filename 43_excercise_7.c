#include<stdio.h>
struct data
{
char name[20];
int dl[10];
char route[29];
int kms[55];
}
arr[79];

    int main ()
{ int j;
printf("enter the number of drivers\n");
scanf("%d",&j);
printf("\n");
    for (int i = 1; i <= j; i++)
  {
   printf("Enter the details of drivers : %d\n",i);
   printf("1. Enther the name of driver:\n");
   scanf("%s",&arr[i].name);
   printf("2. Enther the dl \n");
   scanf("%s", &arr[i].dl);
   printf("3. Enther the route \n");
   scanf("%s", &arr[i].route);
   printf("4. Enther the kilometeres \n");
   scanf("%s", &arr[i].kms);
   printf("\n");
}
printf("********printing the details of drivers*******\n");
printf("\n");

for (  int i=1; i<=j;  i++)
{

printf("Detials of driver no %d are given below:\n", i);
printf("The name of driver is %s\n",arr[i].name );
printf("The dl of driver is %s\n",arr[i].dl );
printf("The route of driver is %s\n",arr[i].route );
printf("The kms of travelled is %s\n",arr[i].kms );
}
return 0;
}