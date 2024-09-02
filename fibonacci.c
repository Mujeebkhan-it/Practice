//wap to take a range from the user and print fibonacci series

//range = 5
//0 1 1 2 3

#include<stdio.h>
int main()
{
	int range,i,f_num = 0,sec_num = 1,third_num;
	printf("Enter the range : ");
	scanf("%d",&range);
	
	if(range >= 3){
	
		printf("\n%d %d ",f_num,sec_num);
		
		for(i = 1; i <= range-2; i++){
			third_num = f_num + sec_num;
			printf("%d ",third_num);
			f_num = sec_num;
			sec_num = third_num;			
		}
	
	}
	else
	{
		printf("Enter number 3 or above !!!");
	}
}
