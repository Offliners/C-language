#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main()
{
	int num;
	printf("Please input an integer : ");
	scanf("%d",&num);
	printf("Factorial (%d) = %d\n",num,factorial(num));
	system("pause");
	return 0;
}

int factorial(int n)
{
	if(n > 1)
		return (n * factorial(n-1));
	else
		return 1;
}
