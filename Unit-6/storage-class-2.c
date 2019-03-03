#include<stdio.h>
#include<stdlib.h>

void increase();

int main()
{
	//測試 static 儲存類別的生命週期 
	int count;
	printf("Testing storage class << static >>\n");
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
	static int si = 100; //設定 si 為 static 儲存類別 
	printf("si = %d\n",++si);
}
/* 
使用 static 的儲存類別，記憶體的儲存空間不會因為函式的結束而釋放
而是在整個程式結束時，才會回收
*/ 
