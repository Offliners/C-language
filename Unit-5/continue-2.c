#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,num,total = 0;
	printf("Please input 10 integers\n");
	for(i = 1;i<=10;i++)
	{
		printf("No.%2d\t",i);
		scanf("%d",&num);
		if(num > 0)
			total += num;
		else
			continue;
	}
	printf("Total = %d\n",total);
	system("pause");
	return 0;
}
