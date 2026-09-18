//wap to print a name age and address
#include<stdio.h>
int main(){
	int age;
	char name [50];
	char address [50];
	printf("enter your name:");
	scanf("%s", name);
	printf("enter your age:");
	scanf("%d", &age);
	printf("enter your address:");
	scanf("%s", address);
	printf("your name is %s age is %d and address is %s", name, age, address);
	return 0;
}

