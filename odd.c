#include <stdio.h>
int main (){
	int i;
	printf("Odd numbers up to 100 are:\n");
	i=1;
	do{
		printf("%d\n",i);
		i=i+2;
	}
	while(i<=100);
}
