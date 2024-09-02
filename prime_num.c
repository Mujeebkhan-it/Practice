//take user input to check prime or not
#include<stdio.h>
int main()
{
	int num,i,cnt=0;
	printf("Enter number to check prime or not : ");
	scanf("%d",&num);
	
	for(i = 2; i < num ; i++){
		if(num % i == 0){
			cnt++;
		}
	}
	if(cnt == 0)
	{
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
	
	return 0;
}
