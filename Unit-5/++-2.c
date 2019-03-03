#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0,total = 0;
	while(i++ < 100) //雖然 ++ 的運算優先順序優先 < ，但因為是後繼加，所以先處理 < 
		total += i;
	printf("1 + 2 + 3 + ... + 100 = %d, i = %d\n",total,i);
	system("pause");
	return 0;
}
