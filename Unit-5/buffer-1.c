#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	char ch;
	printf("Please input a number : ");
	scanf("%d",&num); //���J�Ʀr��A���Uenter��|�� '\n' �d�b�w�İϡA�ӵ{�����|���ݿ�J�A����Ū�� 
	printf("Please input a character : ");
	scanf("%c",&ch);
	printf("num = %d, character = %c\n",num,ch);
	getchar(); //�n�D��J�r���A��enter���� 
	return 0;
}
