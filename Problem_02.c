//wap to find a even or odd number
#include<stdio.h>
int main(){
	int num;
	printf("enter your number:");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("even number");
	else 
		printf("odd number");
	return 0;
}