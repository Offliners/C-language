#include<stdio.h>
#include<stdlib.h>

int main()
{
	char letter;
	letter = 'a'+'d'-'b';
	/*
	字元的運算會對應其ASCII值
	a為97、d為100、b為98
	97+100-98 = 99
	99對應為c
	*/ 
	printf("a + d - b = %c\n",letter);
	system("pause");
	return 0;
}
