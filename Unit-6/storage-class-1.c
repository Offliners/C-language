#include<stdio.h>
#include<stdlib.h>

void increase();

int main()
{
	//���� auto�x�s���O���ͩR�g�� 
	int count;
	printf("Testing storage class << auto >>\n");
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
	auto int ai = 100; //�]�w ai �� auto �x�s���O 
	printf("ai = %d\n",++ai);
}
/*
�C��I�s increase() �禡�ɡA�|�� ai ���֥[���ʧ@
����X����101�A�i����禡�����ɡA ai ���O����N�|�Q����
�ҥH ai ���x�s�ȴN���s�b
�禡���ҩw�q auto ���ܼƬҷ|�Q��l��(���s�t�m�O����)
���o�Ǽƭ��ܤƪ����ܡA auto�O�ٲ���
*/ 
