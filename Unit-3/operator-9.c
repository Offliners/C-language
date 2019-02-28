#include<stdio.h>
#include<stdlib.h>

int main()
{
	short int a = 8;
	short int b = -8;
	printf("a = %d\n",a);
	printf("a << 1 = %d\n",a<<1);
	printf("a << 2 = %d\n",a<<2);
	printf("a << 3 = %d\n",a<<3);
	printf("a >> 1 = %d\n",a>>1);
	printf("a >> 2 = %d\n",a>>2);
	printf("a >> 3 = %d\n",a>>3);
	printf("\n");
	printf("b = %d\n",b);
	printf("b << 1 = %d\n",b<<1);
	printf("b << 2 = %d\n",b<<2);
	printf("b << 3 = %d\n",b<<3);
	printf("b >> 1 = %d\n",b>>1);
	printf("b >> 2 = %d\n",b>>2);
	printf("b >> 3 = %d\n",b>>3);
	system("pause");
	return 0;
}
