#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[10],i;
	for(i = 0;i<10;i++)
	//�Q�� %p �L�X�O�����} 
		printf("&num[%d] = %p, num + %d = %p\n",i,&num[i],i,num+i);
	//�ѵ��G�i���A�C�@�Ӥ����ۮt 4 bytes 
	system("pause");
	return 0;
}
