#include<stdio.h>

int main()
{
	int start,end;
	printf("Enter the starting number : ");
	scanf("%d",&start);
	printf("Enter the Ending number : ");
	scanf("%d",&end);
	
	if(start < end)
	{
		for(start; start <= end ; start++)
		{
			printf("%d\n",start);
		}
	}
		
	else if(start > end)
	{
		for(start; start >= end; start--)
		{
			printf("%d\n",start);
		}
	} 
	
	else
	{
		printf("Please Enter Different Number.....!!!!!!!!!!!!");
	}
	
	return 0;
}
