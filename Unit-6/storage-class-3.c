#include<stdio.h>
#include<stdlib.h>

int main()
{
	//���� register �x�s���O
	int count1,count2;
	register long num = 0;
	printf("Testing storage class << register >>\n");
	printf("Number : \n");
	for(count1 = 1;count1<=500;count1++)
	{
		for(count2 = 1;count2<=500;count2++)
			printf("\r%d",++num); //�ѩ�ϥ� register �x�s���O�A�ϱo�j�餤 num ���t�׼W�[�A�i�H�Pauto����o�� 
	}
	printf("\nTesting end!\n");
	system("pause");
	return 0;
}
