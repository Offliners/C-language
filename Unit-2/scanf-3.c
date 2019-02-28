#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year,month,day,hour,min,sec;
	char letter1,letter2;
	printf("Please input two characters splitted by space : ");
	scanf("%c %c",&letter1,&letter2);
	printf("Please input current time (hour:min:sec) : ");
	scanf("%d:%d:%d",&hour,&min,&sec);
	printf("Please input nowaday date (month-day-year) : ");
	scanf("%d-%d-%d",&month,&day,&year);
	printf("\n");
	printf("the two characters you input are %c and %c\n",letter1,letter2);
	printf("the current time is %d hour %d min %d sec\n",hour,min,sec);
	printf("the nowaday date is AD %d %d month %d\n",year,month,day);
	system("pause");
	return 0;
}
