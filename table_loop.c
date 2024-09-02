//take 2numbers from user
//1 ---> 6
//2 ----> 3
//
//op: 6 * 1 = 6
// 6 * 2 = 12
// 6 * 3 = 18

#include<stdio.h>
int main()
{
	int num1,num2,i,mul;
	printf("Enter number to calculate table : ");
	scanf("%d",&num1);
	printf("Enter number of how many rows u want : ");
	scanf("%d",&num2);
	
	for(i = 1;i<=num2;i++){
		mul = i * num1;
		printf("%d x %d = %d\n",num1,i,mul);
	}
	
	return 0;
}
