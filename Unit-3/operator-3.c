#include<stdio.h>
#include<stdlib.h>

int main()
{
	char letter;
	letter = 'a'+'d'-'b';
	/*
	�r�����B��|������ASCII��
	a��97�Bd��100�Bb��98
	97+100-98 = 99
	99������c
	*/ 
	printf("a + d - b = %c\n",letter);
	system("pause");
	return 0;
}
