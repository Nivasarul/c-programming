#include<stdio.h>
#include<conio.h>
int main()
{
	double num1,num2,product;
	printf("enter the first number : ");
	scanf("%lf",&num1);
	printf("enter the second number : ");
	scanf("%lf",&num2);
	product=num1*num2;
	printf("%lf* %lf=%.2lf",num1,num2,product);
	return 0;
}
