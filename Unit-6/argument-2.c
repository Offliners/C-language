#include<stdio.h>
#include<stdlib.h>

void printstar(int);

int main()
{
	int num;
	printf("How many * do you want? ");
	scanf("%d",&num);
	printstar(num);
	system("pause");
	return 0;
}

void printstar(int n)
{
	int i;
	for(i = 0;i<n;i++)
		printf("*");
	printf("\n");	
}
