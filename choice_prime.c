//take 2 number from user
//1st num = strting point
//2nd num = ending point

//choice
//1. Prime => 5,7,11,13
//2. Not prime => 6,8,9,10,12,14,15

#include<stdio.h>
int main()
{
	int num1,num2,i,j,cnt=0,choice;
	printf("Enter Starting number : ");
	scanf("%d",&num1);
	printf("Enter Ending number : ");
	scanf("%d",&num2);	
	
	printf("\n\nEnter 1 to see Prime numbers and \nEnter 2 to see Not prime Number \nEnter 3 to see Both : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			for(i = num1; i <= num2; i++){
			cnt = 0;
				for(j = 2; j < i ; j++){
					if(i % j == 0)
					{
						cnt++;
					}
				}
				if(cnt == 0)
				{
					printf("%d is Prime\n",i);
				}
			}
		break;
		
		case 2: 
			for(i = num1; i <= num2; i++){
			cnt = 0;
				for(j = 2; j < i ; j++){
					if(i % j == 0)
					{
						cnt++;
					}	
				}
				if(cnt != 0)
				{
					printf("%d is Not Prime\n",i);
				}
			}
		break;
		
		case 3:
			for(i = num1; i <= num2; i++){
			cnt = 0;
				for(j = 2; j < i ; j++){
					if(i % j == 0)
					{
						cnt++;
					}
				}
				if(cnt == 0)
				{
					printf("%d is Prime\n",i);
				}
				else
				{
					printf("%d is Not Prime\n",i);
				}
			}
		break;
		
	}
	return 0;
}
