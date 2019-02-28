#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1 = 50,num2 = 70,num3 = 60,bool;
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	printf("num3 = %d\n",num3);
	/*ÅÞ¿è¹Bºâ¤l
	&& and
	|| or
	!  not
	*/ 
	bool = num2>num1 && num2>num3;
	printf("num2>num1 && num2>num3 => %d\n",bool);
	bool = num2>num1 && num1>num3;
	printf("num2>num1 && num1>num3 => %d\n",bool);
	printf("==================================================\n");
	bool = num1>num2 || num2>num3;
	printf("num1>num2 || num2>num3 => %d\n",bool);
	bool = num1>num2 || num3>num2;
	printf("num1>num2 || num3>num2 => %d\n",bool);
	printf("==================================================\n");
	bool = !(num1>num3 && num2>num3);
	printf("!(num1>num3 && num2>num3) => %d\n",bool);
	bool = !(num1=1>num2 || num3>num1);
	printf("!(num1>num2 || num3>num1) => %d\n",bool);
	system("pause");
	return 0;
}
