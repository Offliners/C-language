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

int array[5]; //定義全域變數陣列 

void input(void)
{
	int index; //因為是區域變數，所以與其他函式的區域變數重複沒關係 
	for(index = 0;index<5;index++)
	{
		printf("Please input #%d integer : ",index+1);
		scanf("%d",&array[index]); //使用全域變數做輸入 
	}
}

void output(void)
{
	int index;
	printf("\n");
	for(index = 0;index<5;index++)
		printf("array[%d] = %d\n",index,array[index]);
}
