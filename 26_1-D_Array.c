#include<stdio.h>
int main()
{
   int marks[10], sum=0;
   printf("enter marks of 10 students:\n");
   for (int i =0 ; i<=9;i++){
   printf("marks of %d student:",i+1);
   scanf("%d",&marks[i]);
   sum+=marks[i] ;}


   int average=sum/10;
   printf("the avg marks of 10 students %d",average);
   return 0;   }