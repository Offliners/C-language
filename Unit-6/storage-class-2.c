#include<stdio.h>
#include<stdlib.h>

void increase();

int main()
{
	//���� static �x�s���O���ͩR�g�� 
	int count;
	printf("Testing storage class << static >>\n");
	for(count = 1;count<=5;count++)
	{
		printf("# %d call : ",count);
		increase();
	}
	printf("Testing end!\n");
	system("pause");
	return 0;
}

void increase()
{
	static int si = 100; //�]�w si �� static �x�s���O 
	printf("si = %d\n",++si);
}
/* 
�ϥ� static ���x�s���O�A�O���骺�x�s�Ŷ����|�]���禡������������
�ӬO�b��ӵ{�������ɡA�~�|�^��
*/ 
