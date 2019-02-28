#include<stdio.h>
#include<stdlib.h>

int main()
{
	double height;
	double weight;
	printf("Please input your height in meter : ");
	scanf("%lf",&height);
	printf("Please input your weight in kilogram : ");
	scanf("%lf",&weight);
	double BMI = weight / (height*height);
	printf("BMI = %f\n",BMI);
	if(BMI < 18.5)
		printf("Your weight is underweight\n");
	else if (BMI < 24)
		printf("Your weight is normal\n");
	else if(BMI < 27)
		printf("Your weight is overweight\n");
	else if(BMI < 30)
		printf("Your weight is mild overweight\n");
	else if(BMI < 35)
		printf("Your weight is moderate overweight\n");
	else
		printf("Your weight is severe overweight\n");
	system("pause");
	return 0;
}
