#include<stdio.h>
int main()
{int age;
printf("enter your age");
scanf("%d",&age); 


if (age>=18){
printf("u can vote!");}
else if (age<18 && age>=10)
{printf("u can vote for kids!");}
else {printf("u cant vote");}
return 0;}
