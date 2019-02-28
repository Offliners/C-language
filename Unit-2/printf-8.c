#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1 = 123;
	double num2 = 123.456;
	printf("using %%d-------|%d|\n",num1);
	printf("using %%10d-----|%10d|\n",num1);
	printf("using %%-10d----|%-10d|\n",num1);
	printf("using %%2d------|%2d|\n",num1);
	printf("using %%10.2f---|%10.2f|\n",num2);
	printf("using %%.2f-----|%.2f|\n",num2);
	system("pause");
	return 0;
}
