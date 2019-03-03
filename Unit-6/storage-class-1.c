#include<stdio.h>
#include<stdlib.h>

void increase();

int main()
{
	//測試 auto儲存類別的生命週期 
	int count;
	printf("Testing storage class << auto >>\n");
	for(count = 1;count<=5;count++)
	{
		printf("# %d call : ",count);
		increase();
	}
	printf("Testing end!\n");
	system("pause");
	return 0;
}

void increase()
{
	auto int ai = 100; //設定 ai 為 auto 儲存類別 
	printf("ai = %d\n",++ai);
}
/*
每當呼叫 increase() 函式時，會對 ai 做累加的動作
但輸出都為101，可知當函式結束時， ai 的記憶體就會被釋放
所以 ai 的儲存值就不存在
函式內所定義 auto 的變數皆會被初始化(重新配置記憶體)
對於這些數值變化的改變， auto是省略的
*/ 
