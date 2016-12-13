#include<stdio.h>

int main(){
	
	int num1;
	int num2;
	int num3;
	int ave;
	
	
	printf("Enter num1:\n");
	scanf("%d", &num1);
	printf("Enter num2:\n");
	scanf("%d", &num2);
	printf("Enter num3:\n");
	scanf("%d", &num3);
	
	ave=(num1+num2+num3)/3;
	printf("The average of the three numbers is basically %d", ave);
	
	
}
