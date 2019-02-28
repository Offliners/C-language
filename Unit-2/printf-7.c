#include<stdio.h>
#include<stdlib.h>

int main()
{
	char letter = 'a';
	printf("|%c| using %%c\n",letter);
	printf("|%10c| using %%10c\n",letter);
	printf("|%-10c| using %%-10c\n",letter);
	system("pause");
	return 0;
} 
