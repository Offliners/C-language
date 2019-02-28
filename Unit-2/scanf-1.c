#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	printf("Please input a integer : ");
	scanf("%d",&x);
	//&為位址運算子 
	printf("the integer you input is %d\n",x);
	system("pause");
	return 0;
} 
