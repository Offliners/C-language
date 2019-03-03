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
	//提示使用者輸入年分 
	int year;
	printf("Enter full year (e.g. 2019) : ");
	scanf("%d",&year);
	
	//提示使用者輸入月份 
	int month;
	printf("Enter month in number between 1-12 : ");
	scanf("%d",&month);
	
	//印出某一年的某一個月的日曆
	printMonth(year,month);
	printf("\n");
	system("pause");
	return 0; 
}

//印出月曆某年的月份詳細資料
void printMonth(int year,int month)
{
	printMonthTitle(year,month); //印出日曆標題 
	printMonthBody(year,month);  //印出日曆本體 
} 

//印出日曆的標頭 
void printMonthTitle(int year,int month)
{
	printMonthName(month);
	printf(" %d\n",year);
	printf("------------------------------------------\n");
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");	
}

//印出月份的英文名稱 
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

//印出日曆的本體
void printMonthBody(int year,int month)
{
	//取得某月第一天是星期幾
	int startday = getStartDay(year,month);
	
	//取得某月天數
	int numberOfDaysInMonth = getNumberOfDaysInMonth(year,month);
	
	//在月份的第一天前加些空白
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

//取得月份的第一天
int getStartDay(int year,int month)
{
	//取得從1800/01/01到給予某年某月的總天數
	int startDay1800 = 3;
	int totalNumberOfDays = getTotalNumberOfDays(year,month);
	
	//回傳開始是星期幾
	return ((totalNumberOfDays + startDay1800)%7) ;
} 

//取得從1800/01/01開始到給予某年某月的天數
int getTotalNumberOfDays(int year, int month)
{
	int total = 0;
	int i;
	//取得到1800到 year-1 的天數
	for(i = 1800;i<=year-1;i++)
	{
		if(isLeapYear(i))
			total += 366;
		else
			total += 365;
	} 
	
	//再加上從一月到 month-1 的天數
	for(i = 1;i<=month-1;i++)
		total += getNumberOfDaysInMonth(year,i);
	
	return total;
} 

//取得某月的天數
int getNumberOfDaysInMonth(int year, int month)
{
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	if(month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	if(month == 2)
		return isLeapYear(year)? 29:28;
	return 0; //月份不明 
} 

//判斷是否為閏年
_Bool isLeapYear(int year)
{
	return (year%400==0 || (year%4==0&&year%100!=0));
} 
