//Pallindrome or not

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
	
	if(copy == reverse)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot Palindrome");
	}
	
	return 0;
}
