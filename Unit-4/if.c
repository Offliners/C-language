#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;
	printf("If score is more than 60, the score can be added 10\n");
	printf("Please input your score : ");
	scanf("%d",&score);
	if(score >= 60)
		score += 10; //�p�G�u���@��i�H���ϥΤj�A�� 
	printf("your final score is %d\n",score);
	system("pause");
	return 0;
}
