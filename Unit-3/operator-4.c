#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1,num2;
	num1 = 60;
	num2 = 30;
	// = 為指定運算子，表示將右邊的值指定給左邊的變數 
	printf("num1 = %d, num2 = %d\n",num1,num2);
	num1 -= num2;
	printf("num1-=num2 => num1 = %d, num2 = %d\n",num1,num2);
	num1 /= num2;
	printf("num1/=num2 => num1 = %d, num2 = %d\n",num1,num2);
	num1 += num2;
	printf("num1+=num2 => num1 = %d, num2 = %d\n",num1,num2);
	num1 *= num2;
	printf("num1*=num2 => num1 = %d, num2 = %d\n",num1,num2);
	num1 %= num2;
	printf("num1%%=num2 => num1 = %d, num2 = %d\n",num1,num2);
	system("pause");
	return 0;
}
