#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	printf("%54s","<<Multiplication Table>>\n");
	for(i = 1;i<=9;i++) //此為外迴圈 
	{
		for(j = 1;j<=9;j++) //此為內迴圈 
			printf("%d*%d = %2d  ",j,i,i*j);
		printf("\n");
	}
	system("pause");
	return 0;
}
