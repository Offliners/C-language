#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,total = 0;
	for(num = 1;num<=100;num++)
		total += num;
	printf("1 + 2 + 3 + 4 + ... + 100 = %d\n",total);
	system("pause");
	return 0; 
}
