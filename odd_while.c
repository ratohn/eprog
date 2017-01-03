#include <stdio.h>
int main (){
	int i;
	printf("Even numbers up to 100:\n");
	i=1;
	do{
		printf("%d\n",i);
		i=i+2;
	}
	while(i<=100);
}
