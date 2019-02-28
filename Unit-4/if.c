#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;
	printf("If score is more than 60, the score can be added 10\n");
	printf("Please input your score : ");
	scanf("%d",&score);
	if(score >= 60)
		score += 10; //如果只有一行可以不使用大括號 
	printf("your final score is %d\n",score);
	system("pause");
	return 0;
}
