#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2,big;
	printf("Please input two numbers : ");
	scanf("%d %d",&num1,&num2);
	if(num1 > num2)
		big = num1;
	else if(num1 < num2)
		big = num2;
	printf("The bigger number is %d\n",big);
	system("pause");
	return 0;
}
