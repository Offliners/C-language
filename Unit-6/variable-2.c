#include<stdio.h>
#include<stdlib.h>

void input(void);
void output(void);

int main()
{
	printf("This program is aimed at testing the global variable\n");
	input();
	output();
	system("pause");
	return 0;
}

int array[5]; //�w�q�����ܼư}�C 

void input(void)
{
	int index; //�]���O�ϰ��ܼơA�ҥH�P��L�禡���ϰ��ܼƭ��ƨS���Y 
	for(index = 0;index<5;index++)
	{
		printf("Please input #%d integer : ",index+1);
		scanf("%d",&array[index]); //�ϥΥ����ܼư���J 
	}
}

void output(void)
{
	int index;
	printf("\n");
	for(index = 0;index<5;index++)
		printf("array[%d] = %d\n",index,array[index]);
}
