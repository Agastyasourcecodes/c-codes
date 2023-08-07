#include<stdio.h>
int main()
{
	//method 1: Using Print Commands

	int table;
	printf("Enter the number you want multiplication table of\n  ",table );
	scanf("%d", &table);

	printf("Multiplication table of %d is :\n", table);
	
	
	printf("%d*2 = %d\n", table, table*2);
	printf("%d*3 = %d\n", table, table*3);
	

	return 0;
}