#include<stdio.h>
#include<stdlib.h>

int square();

int main()
{
	int ans;
	printf("Calculate the square of an integer\n");
	ans = square();
	printf("the square of this number is %d\n",ans);
	system("pause");
	return 0;
}

int square() //函數型態為 int 
{
	int num,total;
	printf("Please input an integer : ");
	scanf("%d",&num);
	total = num*num;
	return total; // 將total傳回呼叫函數 
}
