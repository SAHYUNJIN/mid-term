#include<stdio.h>
double aver_age(double in1, double in2)
{
	double avr = (in1+in2)/2;
	printf("%f", avr);
}
int main(void)
{
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	aver_age(num1, num2);
	return 0;
}

