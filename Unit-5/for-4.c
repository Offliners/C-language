#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	for(;;) //�ٲ��פ���� 
	{
		if(num > 5)
			break;
		printf("num is %d\n",num);
		num++;
	}
	system("pause");
	return 0; 
}
