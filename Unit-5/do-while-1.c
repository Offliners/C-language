#include<stdio.h>
#include<stdlib.h>

int main()
{
	int height;
	int inch;
	do
	{
		printf("What is your height in centimeter?");
		scanf("%d",&height);
	}while(height<0); //如果身高為負數，將會要求重新輸入 
	inch = height/2.54;
	printf("Your height in inch is %d foots and %d inches\n",inch/12,inch%12);
	system("pause");
	return 0;
}
