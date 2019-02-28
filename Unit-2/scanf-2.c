#include<stdio.h>
#include<stdlib.h>

int main()
{
	char letter;
	float f;
	double d;
	printf("Please input a character : ");
	scanf("%c",&letter);
	printf("Please input a number of float type : ");
	scanf("%f",&f);
	printf("Please input a number of double type : ");
	scanf("%lf",&d); //輸入double浮點數的變數時，則需要用 %lf 
	printf("===========================================================\n");
	printf("the character you input is %c\n",letter);
	printf("the number of float type you input is %f\n",f);
	printf("the number of double type you input is %f\n",d); //輸出double與float的變數皆用 %f 
	system("pause");
	return 0;
}
