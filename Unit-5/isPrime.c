#include<stdio.h>
#include<stdlib.h>

int main()
{
	int NumberofPrime = 100;
	int NumberofPrimeofPerline = 10;
	int count = 0;
	int number = 2;
	int divisor;
	printf("Top 100 prime number are : \n");
	while(count < NumberofPrime)
	{
		int isPrime = 1;
		for(divisor = 2; divisor <= number/2; divisor++) //測試是否為質數 
		{
			if(number % divisor == 0)
			{
				isPrime = 0;
				break;	
			}
		}
		if(isPrime) //顯示質數 
		{
			count++;
			if(count % NumberofPrimeofPerline == 0)
				printf("%4d\n",number);
			else
				printf("%4d",number);
		}
		number++;
	}
	system("pause");
	return 0;
}
