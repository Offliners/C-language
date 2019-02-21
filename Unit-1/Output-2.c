#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1 = 10;
	int num2; //未設定初始值 
	double x = 2.5;
	char y = 'z';
	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2); //印出記憶體的殘留值 
	printf("x = %f\n",x);
	printf("y = %c\n",y);
	system("pause");
	return 0;
}
