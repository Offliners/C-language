#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("The correct number is between 100 to 200\n");
	printf("Please input a number : ");
	scanf("%d",&num);
	if(num >= 100 && num <=200) 
		printf("the number is true\n");
	else
		printf("the number is false\n");
	system("pause");
	return 0;
}
