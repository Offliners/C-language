#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	printf("%54s","<<Multiplication Table>>\n");
	for(i = 1;i<=9;i++) //�����~�j�� 
	{
		for(j = 1;j<=9;j++) //�������j�� 
			printf("%d*%d = %2d  ",i,j,i*j); //i�Mj��m���� 
		printf("\n");
	}
	system("pause");
	return 0;
}
