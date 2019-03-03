#include<stdio.h>
#include<stdlib.h>

void printMonth(int year,int month);
void printMonthTitle(int year,int month);
void printMonthName(int month);
void printMonthBody(int year,int month);
int getStartDay(int year,int month);
int getTotalNumberofDays(int year,int month);
int getNumberOfDaysInMonth(int year,int month);
_Bool isLeapYear(int year);

int main()
{
	//���ܨϥΪ̿�J�~�� 
	int year;
	printf("Enter full year (e.g. 2019) : ");
	scanf("%d",&year);
	
	//���ܨϥΪ̿�J��� 
	int month;
	printf("Enter month in number between 1-12 : ");
	scanf("%d",&month);
	
	//�L�X�Y�@�~���Y�@�Ӥ몺���
	printMonth(year,month);
	printf("\n");
	system("pause");
	return 0; 
}

//�L�X���Y�~������ԲӸ��
void printMonth(int year,int month)
{
	printMonthTitle(year,month); //�L�X�����D 
	printMonthBody(year,month);  //�L�X��䥻�� 
} 

//�L�X��䪺���Y 
void printMonthTitle(int year,int month)
{
	printMonthName(month);
	printf(" %d\n",year);
	printf("------------------------------------------\n");
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");	
}

//�L�X������^��W�� 
void printMonthName(int month)
{
	printf("             ");
	switch(month)
	{
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;		
		case 11:
			printf("November");
			break;		
		case 12:
			printf("December");
			break;	
	}
} 

//�L�X��䪺����
void printMonthBody(int year,int month)
{
	//���o�Y��Ĥ@�ѬO�P���X
	int startday = getStartDay(year,month);
	
	//���o�Y��Ѽ�
	int numberOfDaysInMonth = getNumberOfDaysInMonth(year,month);
	
	//�b������Ĥ@�ѫe�[�Ǫť�
	int i;
	for(i = 0;i<startday;i++)
		printf("     ");
	for(i = 1;i <= numberOfDaysInMonth;i++)
	{
		printf("%5d",i);
		if((i + startday)%7 ==0)
			printf("\n");
	}	
}

//���o������Ĥ@��
int getStartDay(int year,int month)
{
	//���o�q1800/01/01�쵹���Y�~�Y�몺�`�Ѽ�
	int startDay1800 = 3;
	int totalNumberOfDays = getTotalNumberOfDays(year,month);
	
	//�^�Ƕ}�l�O�P���X
	return ((totalNumberOfDays + startDay1800)%7) ;
} 

//���o�q1800/01/01�}�l�쵹���Y�~�Y�몺�Ѽ�
int getTotalNumberOfDays(int year, int month)
{
	int total = 0;
	int i;
	//���o��1800�� year-1 ���Ѽ�
	for(i = 1800;i<=year-1;i++)
	{
		if(isLeapYear(i))
			total += 366;
		else
			total += 365;
	} 
	
	//�A�[�W�q�@��� month-1 ���Ѽ�
	for(i = 1;i<=month-1;i++)
		total += getNumberOfDaysInMonth(year,i);
	
	return total;
} 

//���o�Y�몺�Ѽ�
int getNumberOfDaysInMonth(int year, int month)
{
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	if(month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	if(month == 2)
		return isLeapYear(year)? 29:28;
	return 0; //������� 
} 

//�P�_�O�_���|�~
_Bool isLeapYear(int year)
{
	return (year%400==0 || (year%4==0&&year%100!=0));
} 
