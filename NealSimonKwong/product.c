#include <stdio.h>
float prodFloat(float a, float b);
int main() {
	float number1;
	float number2;
	float prod;
	printf("Enter first number:");
	scanf("%f",&number1);
	printf("Enter second number:");
	scanf("%f",&number2);	
	prod = prodFloat(number1,number2);
	printf("product %f * %f = %f\n", number1, number2, prod);
	return 0;
}

float prodFloat(float a,float b) {
	float prod;
	prod = a * b;
}
