#include <stdio.h>
int main()
{
    int n,sum=0;
    do
    {
        printf("enter number:");
        scanf("%d",&n);
        sum+=n;

    } while (n!=0);
    printf("sum is %d",sum);
    return 0;
    
}
