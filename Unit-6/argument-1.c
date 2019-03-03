#include<stdio.h>
#include<stdlib.h>

int square(int);

int main()
{
	int num,ans;
	printf("Calculate the square of an integer\n");
	printf("Please input an integer : ");
	scanf("%d",&num);
	ans = square(num);
	printf("The square of %d is %d\n",num,ans);
	system("pause");
	return 0;
}

int square(int n)
{
	int total;
	total = n * n;
	return total;
}
