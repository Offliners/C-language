#include<stdio.h>
#include<stdlib.h>

int main()
{
	//測試 register 儲存類別
	int count1,count2;
	register long num = 0;
	printf("Testing storage class << register >>\n");
	printf("Number : \n");
	for(count1 = 1;count1<=500;count1++)
	{
		for(count2 = 1;count2<=500;count2++)
			printf("\r%d",++num); //由於使用 register 儲存類別，使得迴圈中 num 的速度增加，可以與auto比較得知 
	}
	printf("\nTesting end!\n");
	system("pause");
	return 0;
}
