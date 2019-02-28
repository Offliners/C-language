#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Please input a number : ");
	scanf("%d",&num);
	if(num >= 0) 
	{
		printf("%d is more than 0\n",num);
		printf("%d is a positive integer\n",num); //複數敘述需要大括號 
	}		
	else
	{
		printf("%d is less than 0\n",num);
		printf("%d is a negative integer\n",num);	
	}
	system("pause");
	return 0;
}
