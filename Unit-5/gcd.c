#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2;
	printf("Please input two numbers : ");
	scanf("%d %d",&num1,&num2);
	int gcd = 1;
	int n = 2;
	while(n <= num1 && n <= num2)
	{
		if(num1 % n == 0 && num2 % n == 0)
			gcd = n;
		n++;	
	}
	printf("the gcd of %d and %d is %d\n",num1,num2,gcd);
	system("pause");
	return 0;
}
