#include<stdio.h>
int main(){
	int month, day;
	
		printf("I ASK A MONTH:\n");
		scanf("%d", &month);
		if (month==1){
			printf("IT IS JANUARY\n\n");
 		}
 		if (month==2){
			printf("IT IS FEBRUARY\n\n");
 		}
 		if (month==3){
			printf("IT IS MARCH\n\n");
 		}
 		if (month==4){
			printf("IT IS APRIL\n\n");
 		}
 		if (month==5){
			printf("IT IS MAY\n\n");
 		}
 		if (month==6){
			printf("IT IS JUNE\n\n");
 		}
 		if (month==7){
			printf("IT IS JULY\n\n");
 		}
		if (month==8){
			printf("IT IS AUGUST\n\n");
 		}
 		if (month==9){
			printf("IT IS SEPTEMBER\n\n");
 		}
 		if (month==10){
			printf("IT IS OCTOBER\n\n");
 		}
 		if (month==11){
			printf("IT IS NOVEMBER\n\n");
 		}
 		if (month==12){
			printf("IT IS DECEMBER\n\n");
 		}
 		else if (month>=13){
 			printf("ONLY 12 MONTHS\n\n");
		}
		printf("I ASK A DAY:\n");
		scanf("%d", &day);
 		if (day==1){
 			printf("IT IS SUNDAY\n\n");
		}
		if (day==2){
 			printf("IT IS MONDAY\n\n");
		}
		if (day==3){
 			printf("IT IS TUESDAY\n\n");
		}
		if (day==4){
 			printf("IT IS WEDNESDAY\n\n");
		}
		if (day==5){
 			printf("IT IS THURSDAY\n\n");
		}
		if (day==6){
 			printf("IT IS FRIDAY\n\n");
		}
		if (day==7){
 			printf("IT IS SATURDAY\n\n");
		}
		else if (day>=8){
 			printf("ONLY 7 DAYS\n\n");
		 }
}
