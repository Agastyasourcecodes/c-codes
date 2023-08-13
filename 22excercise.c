#include<stdio.h>
int main()
{
char input;
float kmstomiles=0.621;
float inchestofoot=0.083;
float cmstoinches=0.393;
float poundtokg=0.453;
float inchestometer=0.025;
float first,second;

while (1)
{ printf("Enter the character. q to quit\n"
               "  1. km to miles\n  2. inches to foot\n  3. cms to inches\n"
               "  4. pound to kg\n  5. inches to meter\n")  ;
scanf ( "%c" ,&input );
switch(input)
{
case 'q':
printf("quitting the program");
goto end;
break;

case '1':
printf("enter the number in first unit\n");
scanf("%f", &first);
second=first * kmstomiles;
printf("%.2f kms is equal to %2.f miles\n",first,second);
break;
case '2':
printf("enter the number in first unit\n");
scanf("%f", &first);
second=first * inchestofoot;
printf("%.2f inches is equal to %.2f foot\n",first,second);
break;
case '3':
printf("enter the number in first unit\n");
scanf("%f", &first);
second=first * cmstoinches;
printf("%.2f cms is equal to to %.2f inches\n",first,second);
break;

case '4':
printf("enter the number in first unit\n");
scanf("%f", &first);
second=first * poundtokg;
printf("%.2f pound is equal to to %.2f kgs\n",first,second);
break;

case '5':
printf("enter the number in first unit\n");
scanf("%f", &first);
second=first * inchestometer;
printf("%.2f inches is equal to to %.2f meters\n",first,second);
break;
default:
printf("  In default now  ");
break;}
}
end:
return 0; }









 
