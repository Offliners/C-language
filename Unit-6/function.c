#include<stdio.h>
#include<stdlib.h>

void output(void);  //函數原型宣告 

int main()
{
	printf("Call \"output\" function\n");
	output(); //呼叫output函數 
	printf("Calling End!\n");
	system("pause");
	return 0;
}

//函數的定義 
void output(void)
{
	printf("I like C-language\n");
	printf("I like python, too\n");
}
