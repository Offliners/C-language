#include<stdio.h>
#include<stdlib.h>

int main()
{
	char letter;
	int count = 0;
	printf("Please input sentence : ");
	scanf("%c",&letter);
	while(letter != '\n')
	{
		count++;
		scanf("%c",&letter);
	}
	printf("The sentence has a total of %d alphabets\n",count);
	system("pause");
	return 0;
}
