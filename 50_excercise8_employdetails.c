#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, x;
    char *ptr;
    printf("Enter the number of employees:\n");
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        printf("Employ no-%d,enter the no. of characters in you ID:\n", i + 1);
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter your employee ID:\n");
        scanf("%s", ptr);
        printf("your employee ID is %s\n", ptr);
        free(ptr);
    }

    return 0;
}