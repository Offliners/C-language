#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0,total = 0;
	while(i++ < 100) //���M ++ ���B���u�������u�� < �A���]���O���~�[�A�ҥH���B�z < 
		total += i;
	printf("1 + 2 + 3 + ... + 100 = %d, i = %d\n",total,i);
	system("pause");
	return 0;
}
