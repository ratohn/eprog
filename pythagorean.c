#include<stdio.h>
#include<math.h>
int main (){
	int a;
	int b;
	int x;
	int y;
	double c;
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	
	x = a*a;
	y = b*b;
	c=x+y;
	printf("c is %lf", sqrt(c));
}
