#include<stdio.h>
#include<stdlib.h>

void output(void);  //��ƭ쫬�ŧi 

int main()
{
	printf("Call \"output\" function\n");
	output(); //�I�soutput��� 
	printf("Calling End!\n");
	system("pause");
	return 0;
}

//��ƪ��w�q 
void output(void)
{
	printf("I like C-language\n");
	printf("I like python, too\n");
}
