#include<stdio.h>
#include<stdlib.h>

void test(void);

int main()
{
	printf("This program is aimed at the function of return\n");
	printf("Test start!\n");
	test();
	printf("Test end!\n");
	system("pause");
	return 0;
} 

void test(void)
{
	int i,a,b;
	for(i = 1;i<=10;i++)
	{
		printf("Please input a and b : ");
		scanf("%d %d",&a,&b);
		if(b==0)
			return;
		else
			printf("%d / %d = %d\n",a,b,a/b);
		printf("for loop runs %d times\n\n",i);
	}
}
