#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;
	printf("Please input a score : ");
	scanf("%d",&score);
	if(score >= 60) 
		if(score <= 80)
			score += 10;
	else
		score += 5; // else�û��P��̱���B�٥��t�諸if�۵��X 
	printf("score is %d\n",score);
	system("pause");
	return 0;
}
