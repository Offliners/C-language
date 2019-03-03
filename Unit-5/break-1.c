#include<stdio.h>
#include<stdlib.h>

int main()
{
	char letter;
	int count = 0;
	printf("Please input a word : ");
	scanf("%c",&letter);
	while(letter != '\n')
	{
		if(letter == 'a') //如果遇到字母a就強迫結束 
			break;
		if(letter != '\n')
		{
			count++;
			printf("%c",letter);
		}
		scanf("%c",&letter);
	}
	printf("\nTotal : %d alphabet\n",count);
	system("pause");
	return 0;
} 
