#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 100;
	printf("100%% orange juice\n");
	printf("Output 100 using %%d: %d\n",i);
	printf("Output 100 using %%x: %x\n",i);
	printf("Output 100 using %%o: %o\n",i);
	/*�ϥοo����ƪ��榡�S�w�r��X
	%%  �L�X�ʤ���%���Ÿ�
	%d  �L�X�Q�i����(�����t��) 
	%x  �L�X�Q���i����(�L���t��)
	%o  �L�X�K�i����(�L���t��)*/ 
	system("pause");
	return 0; 
}
