#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	char ch;
	printf("Please input a number : ");
	scanf("%d",&num);
	while(getchar() != '\n')
		continue;
	printf("Please input a character : ");
	scanf("%c",&ch);
	printf("num = %d, character = %c\n",num,ch);
	getchar(); 
	return 0;
}
