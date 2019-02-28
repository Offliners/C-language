#include<stdio.h>
#include<stdlib.h>

int main()
{
	double num1 = 123.456,num2 = 12.34,num3 = 12.345;
	double num4 = 4.456,num5 = 45.67,num6 = 456.789;
	printf("%f %f %f\n",num1,num2,num3);
	printf("%f %f %f\n",num4,num5,num6);
	printf("\n==============================================\n"); //使用欄位寬之後的輸出 
	printf("%8.3f %8.3f %8.3f\n",num1,num2,num3);
	printf("%8.3f %8.3f %8.3f\n",num4,num5,num6);
	system("pause");
	return 0;
}
