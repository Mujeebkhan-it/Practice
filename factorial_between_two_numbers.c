//Wap to take 2 user input and print between that all factorial number

//factorial of 5 is 120
//factorial of 6 is ....
//factorial of 7 is ...

#include<stdio.h>

int main()
{
	long int num1,num2,i,j,fact = 1;
	printf("Enter starting number : ");
	scanf("%ld",&num1);
	printf("Enter ending number : ");
	scanf("%ld",&num2);
	
	for(i = num1; i<=num2; i++){ //outer loop is for count start to end number
		fact = 1;
		
		for(j = 1; j <= i; j++){ //inner loop is for count factorial of that number
			
			fact = fact * j;
		
		}
		
		printf("Factorial of %d = %d\n",i,fact);
	
	}
	
	return 0;
}
