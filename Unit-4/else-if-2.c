#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Please input an integer : ");
	scanf("%d",&num);
	if(num > 0)
		printf("%d is a positive number\n",num);
	else if(num < 0)
		printf("%d is a negative number\n",num);
	else
		printf("%d is 0\n",num);
	system("pause");
	return 0;
}
