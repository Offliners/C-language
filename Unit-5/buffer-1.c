#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	char ch;
	printf("Please input a number : ");
	scanf("%d",&num); //當輸入數字後，按下enter鍵會有 '\n' 留在緩衝區，而程式不會等待輸入，直接讀取 
	printf("Please input a character : ");
	scanf("%c",&ch);
	printf("num = %d, character = %c\n",num,ch);
	getchar(); //要求輸入字元，按enter結束 
	return 0;
}
