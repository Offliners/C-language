#include<stdio.h>
#include<stdlib.h>

int number; // number �O�@�ӥ����ܼ�
void output(void); 

/*
�Y�����ܼƫŧi�bmain���U�A�hmain�N�L�k�ϥΡA
�ۦP�a�A�Y�ŧi�boutput���U�A�houtput��ƴN�L�k�ϥ�
�]���{���O�ѤW�]��U��
*/ 
int main()
{
	printf("Please input an integer : ");
	scanf("%d",&number);
	output();
	system("pause");
	return 0; 
}

void output()
{
	printf("Number is %d\n",number);
}
