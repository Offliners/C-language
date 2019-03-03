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
	int k,total = 1;
	for(k = 1; k<= n;k++)
		total *= k;
	return total;
}
