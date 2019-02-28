#include<stdio.h>
#include<stdlib.h>

int main()
{
	char level;
	printf("What year are you in(1-4)?");
	scanf("%c",&level);
	switch(level)
	{
		case '1':
			printf("I am a freshman\n");
			break;
		case '2':
			printf("I am a sophomore\n");
			break;
		case '3':
			printf("I am a junior\n");
			break;
		case '4':
			printf("I am a senior\n");
			break;
		default:
			printf("Error\n");
			break;
	}
	system("pause");
	return 0;
}
