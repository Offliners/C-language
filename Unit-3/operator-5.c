#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 20,total = 0;
	total = ++num + 30;
	/*�P�q��
	++num;
	total = num + 30;
	*/ 
	printf("total = %d, num = %d\n",total,num);
	total = 0;
	num = 20;
	total = num++ + 30;
	/*�P�q��
	total = num +30;
	num++;
	*/ 
	printf("total = %d, num = %d\n",total,num);
	system("pause");
	return 0;
} 
