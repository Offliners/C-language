#include<stdio.h>
#include<stdlib.h>

/* 
在storafe-class-4-2.c使用 extern 儲存類別就可以在storage-class-4-1.c使用 
若使用static類別，只能在此檔案內使用 
*/ 
int sum();
int i = 100, j = 200; //若要使用 extern， i與 j 必須是全域變數，才能被其他檔案使用 

int main()
{
	int total;
	total = sum();
	printf("Total = %d\n",total);
	system("pause");
	return 0;
} 
