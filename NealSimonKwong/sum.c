#include <stdio.h>
int sumInt(int a, int b);
int main() {
	int integer1;
	int integer2;
	int sum;
	printf("Enter first integer:");
	scanf("%d",&integer1);
	printf("Enter second integer:");
	scanf("%d",&integer2);	
	sum = sumInt(integer1,integer2);
	printf("sum %d + %d = %d\n", integer1, integer2, sum);
	return 0;
}

int sumInt(int a,int b) {
	int sum;
	sum = a + b;
}
