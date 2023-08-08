#include<stdio.h>

//with arguments no return value
int sum();
int main(){
int result=sum();
printf("sum of two numbers: %d\n",result);
return 0;}
int sum(){

int x,y,z;
 printf("Enter number 1: ");
scanf("%d",&x);
printf("ënter number 2:");
scanf("%d",&y);
z=x+y;
return z;
}