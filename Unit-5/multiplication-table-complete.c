#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n;
	printf("%36s","9 * 9 Multiplication Table\n\n");
	printf("    ");
	for(i = 1;i<=9;i++)
		printf("%4d",i);
	printf("\n");
	
	//�L�X��u
	for(n = 1;n<=40;n++)
		printf("-");
	printf("\n");
	
	//�L�X���� 
	for(i = 1;i<=9;i++)
	{
		printf("%d | ",i);
		for(j = 1;j<=9;j++)
			printf("%4d",i*j);
		printf("\n");
	}
	system("pause");
	return 0;
}
