#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[10],i;
	for(i = 0;i<10;i++)
	//利用 %p 印出記憶體位址 
		printf("&num[%d] = %p, num + %d = %p\n",i,&num[i],i,num+i);
	//由結果可知，每一個元素相差 4 bytes 
	system("pause");
	return 0;
}
