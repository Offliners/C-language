 #include<stdio.h>
 #include<stdlib.h>
 
 int num = 100; //�w�q�����ܼ� 
 void output(void);
 
 int main()
 {
 	printf("number is %d\n",num);
 	output();
 	system("pause");
 	return 0;
 }
 
 void output(void)
 {
 	int num = 200; //�w�q�ϰ��ܼ� 
 	printf("number is %d\n",num);
 	//�ϰ��ܼƻP�����ܼƦW�٬ۦP�ɡA�{���|���ϥΰϰ��ܼ� 
 }
