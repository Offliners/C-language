#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 100;
	printf("100%% orange juice\n");
	printf("Output 100 using %%d: %d\n",i);
	printf("Output 100 using %%x: %x\n",i);
	printf("Output 100 using %%o: %o\n",i);
	/*使用穎關整數的格式特定字輸出
	%%  印出百分比%的符號
	%d  印出十進位整數(有正負號) 
	%x  印出十六進位整數(無正負號)
	%o  印出八進位整數(無正負號)*/ 
	system("pause");
	return 0; 
}
