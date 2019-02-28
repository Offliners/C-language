#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year;
	printf("Please input a year : ");
	scanf("%d",&year);
	_Bool IsLeapYear = (year%400 == 0 || (year%4 == 0 && year%100 !=0)); //_Bool為保留字，bool為_Bool的別名 
	if(IsLeapYear) // 若條件無使用==表示 ==true;反之，!IsLeapYear則表示 == false 
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
	system("pause");
	return 0;
}
