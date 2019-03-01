#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	for(;;) //¬Ù²¤²×¤î±ø¥ó 
	{
		if(num > 5)
			break;
		printf("num is %d\n",num);
		num++;
	}
	system("pause");
	return 0; 
}
