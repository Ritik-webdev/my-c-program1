//wap to find difference of two number
#include<stdio.h>
int main(){
	int a, b, subtract;
	printf("enter the first number:");
	scanf ("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	subtract = a - b;
	printf("the difference of first number and second number is %d", subtract);
	return 0;
}