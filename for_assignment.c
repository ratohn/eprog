#include <stdio.h>
int main(){
	
	int i, number;
	
	printf("Enter number:\t");
	scanf("%d",&number);
	printf("Factors of %d are:\t");
	
	for(i=1, i<=number, i++){
		if(factor%i==0)
		{
			printf("%d,i");
		}
	}
}
