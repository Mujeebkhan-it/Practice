//Reverse number

#include<stdio.h>
int main()
{
	
	int num,rem,reverse = 0;
	printf("Enter the number : ");
	scanf("%d",&num);
	int copy = num;
	
	while(num != 0)
	{
		rem = num % 10;
		reverse = (reverse * 10) + rem;
		num = num / 10;
		
	}
	printf("\nOriginal Number is : %d",copy);
	printf("\nReverse Number is : %d",reverse);
	
	return 0;
}
