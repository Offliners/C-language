#include<stdio.h>
#include<stdlib.h>

int main()
{
	float f = 123.456;
	double d = 123.456;
	printf("f = %f\n",f);
	printf("d = %f\n",d);
	//float資料型態的輸出值可能會有誤差，但double不會有，所以一班系統將浮點數預設為double 
	system("pause");
	return 0;
}
