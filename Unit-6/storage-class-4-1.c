#include<stdio.h>
#include<stdlib.h>

/* 
�bstorafe-class-4-2.c�ϥ� extern �x�s���O�N�i�H�bstorage-class-4-1.c�ϥ� 
�Y�ϥ�static���O�A�u��b���ɮפ��ϥ� 
*/ 
int sum();
int i = 100, j = 200; //�Y�n�ϥ� extern�A i�P j �����O�����ܼơA�~��Q��L�ɮרϥ� 

int main()
{
	int total;
	total = sum();
	printf("Total = %d\n",total);
	system("pause");
	return 0;
} 
