#include<stdio.h>
#include<stdlib.h>

int number; // number 琌办跑计
void output(void); 

/*
璝办跑计main┏玥main碞礚猭ㄏノ
璝output┏玥outputㄧ计碞礚猭ㄏノ
祘Α琌パ禲
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
