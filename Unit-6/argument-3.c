#include<stdio.h>
#include<stdlib.h>

int squareAdd(int,int);
void printStar(int);

int main()
{
	int num1,num2,sum,star;
	printf("This program is aimed at calculating the sum of tow integers\n");
	printf("Please input two integers : ");
	scanf("%d %d",&num1,&num2);
	sum = squareAdd(num1,num2);
	printf("How many star do you want? ");
	scanf("%d",&star);
	printStar(star);
	printf("The sum of %d and %d is %d\n",num1,num2,sum);
	printStar(star);
	system("pause");
	return 0;
}

int squareAdd(int a, int b)
{
	int ans;
	ans = a* a + b * b;
	return ans;
}

void printStar(int n)
{
	int i;
	for(i = 0;i<n;i++)
		printf("*");
	printf("\n");
}
