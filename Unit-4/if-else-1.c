#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;
	printf("If score is more than 60, the score can be added 10. On the contrary, your score can be added 5\n");
	printf("Please input your score : ");
	scanf("%d",&score);
	if(score >= 60)
		score += 10;
	else
		score += 5;
	printf("your final score is %d\n",score);
	system("pause");
	return 0;
}
