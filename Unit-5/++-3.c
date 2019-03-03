#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0,total = 0;
	do
	{
		total += i;
	}while(++i <= 100); //因為 ++ 的運算優先順序優先 < 		
	printf("1 + 2 + 3 + ... + 100 = %d, i = %d\n",total,i);
	system("pause");
	return 0;
}
