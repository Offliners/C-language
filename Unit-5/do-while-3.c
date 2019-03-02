#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*建立選單 
	選單有 :  1 加法   2 減法   3 跳出程式
	*/ 
	int option, no1, no2;
	do
	{
		printf("\n");
		printf("1 => Add operation\n");
		printf("2 => Subtraction operation\n");
		printf("3 => End\n");
		printf("Please input your selection(1-3) : ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("Please input two integers : ");
				scanf("%d %d",&no1,&no2);
				printf("%d + %d = %d\n",no1,no2,no1+no2);
				break;
			case 2:
				printf("Please input two integers : ");
				scanf("%d %d",&no1,&no2);
				printf("%d - %d = %d\n",no1,no2,no1-no2);
				break;
			case 3:
				printf("Goodbye\n");
				break;
			default:
				printf("Erroe\n");				
		}
	}while(option!=3);
	system("pause");
	return 0;
}
