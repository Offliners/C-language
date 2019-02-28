#include<stdio.h>
#include<stdlib.h>

int main()
{
	// short int 為 2bytes = 16 bits 
	short int i = 15;
	short int j = 11;
	/*
	~  not
	&  and
	|  or
	^  exclusive or
	<< left shift
	>> right shift
	*/
	printf("i & j = %hx\n", i&j); // %hx表示以十六進位的方式輸出 
	printf("i | j = %hx\n", i|j);
	printf("i ^ j = %hx\n", i^j);
	printf("~i = %hx\n",~i);
	system("pause");
	return 0;
}
