#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year;
	printf("Please input a year : ");
	scanf("%d",&year);
	_Bool IsLeapYear = (year%400 == 0 || (year%4 == 0 && year%100 !=0)); //_Bool���O�d�r�Abool��_Bool���O�W 
	if(IsLeapYear) // �Y����L�ϥ�==��� ==true;�Ϥ��A!IsLeapYear�h��� == false 
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
	system("pause");
	return 0;
}
