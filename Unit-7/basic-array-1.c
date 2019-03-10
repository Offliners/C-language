#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[10],i;
	for(i = 0;i<10;i++)
	{
		printf("Please input the data of num[%d] : ",i);
		scanf("%d",&num[i]);
	}
	printf("All data : \n");
	for(i = 0;i<10;i++)
		printf("num[%d] : %d\n",i,num[i]);
	system("pause");
	return 0;
} 
