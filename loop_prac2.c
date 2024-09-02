//take user input to how many numbers user want to sum 

#include<stdio.h>
int main()
{
	int size,num,i,sum=0,avg;
	printf("How many number you want to add....... : ");
	scanf("%d",&size);
	
	for(i = 0; i < size ; i++){
		printf("Enter Num : ");
		scanf("%d",&num);
		sum = sum + num;
	}
	
	avg = sum / size;
	
	printf("\nSum is : %d\n",sum);
	printf("Average is : %d",avg);
	
	return 0;
}

