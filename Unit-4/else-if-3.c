#include<stdio.h>
#include<stdlib.h>

int main()
{
	int level;
	printf("What year are you in(1-4)?");
	scanf("%d",&level);
	if(level == 1)
		printf("I am a freshman\n");
	else if (level == 2)
		printf("I am a sophomore\n");
	else if (level == 3)
		printf("I am a junior\n");
	else if (level == 4)
		printf("I am a senior\n");
	else
		printf("Error\n");
	system("pause");
	return 0;
}
