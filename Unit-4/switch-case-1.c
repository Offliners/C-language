#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Please input an integer : ");
	scanf("%d",&num);
	// 使用switch-case 但敘述不用break 
	switch(num)
	{
		case 1:
			printf("Iron Man\n");
		case 2:
			printf("Captain America\n");
		case 3:
			printf("Hulk\n");
		case 4:
			printf("Thor\n");
		default:
			printf("You are not member of The Avengers\n");
	}
	system("pause");
	return 0;
}
