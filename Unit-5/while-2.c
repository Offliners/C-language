#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 1,total = 0;
	while(num <=100)
	{
		total += num;
		num++;
	}
	printf("1 + 2 + 3 + 4 + 5 + 6 + ... + 100 = %d\n",total);
	system("pause");
	return 0;
}
