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
		if(letter == 'a') // �Y�J��r��a�A�h���C�J�p�� 
		{
			scanf("%c",&letter);
			continue;
		}
		if(letter != '\n')
		{
			count++;
			printf("%c",letter);
		}
		scanf("%c",&letter);
	}
	printf("\nTotal : %d alphabets\n",count);
	system("pause");
	return 0;
}
