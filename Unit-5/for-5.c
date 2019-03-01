#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	for(;num>= 0;)
	{
		printf("Please input an integer(If the integer is less than 0, the loop will be ended) : ");
		scanf("%d",&num);
	}
	printf("End!!!\n");
	system("pause");
	return 0; 
}
