#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Please input an integer : ");
	scanf("%d",&num); 
	switch(num)
	{
		case 1:
			printf("Iron Man\n");
			break;
		case 2:
			printf("Captain America\n");
			break;
		case 3:
			printf("Hulk\n");
			break;
		case 4:
			printf("Thor\n");
			break;
		default:
			printf("You are not member of The Avengers\n");
			break;
	}
	system("pause");
	return 0;
}
