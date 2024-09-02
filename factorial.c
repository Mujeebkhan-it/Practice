//wap to take user input to print factorial of that number

#include<stdio.h>

int main()
{
	int num,i,fact=1;
	printf("Enter number to print that factorial : ");
	scanf("%d",&num);
	
	for(i = 1; i<=num ; i++)
	{
		fact = fact * i;
	}
	
	printf("factorial of %d = %d",num,fact);
	
	return 0;
}
