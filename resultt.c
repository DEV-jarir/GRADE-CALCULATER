#include<stdio.h>
int main() {
	printf("\t\t\tGrade Ca-lculater\n");
	float num;
	int grade;
	printf("PLEASE YOUR MARKES :");
	scanf("%f", &num);
	num=num/10;
	(int)num;
	grade=(int)num;
	switch (grade){
		case 1:printf("fail");
			   break;
			   
		case 2:printf("YOU HAVE TO REALLY WORK HARD\n FAIL");
			   break;
			   
		case 3:printf("YOU HAVE TO REALLY WORK HARD\n FAIL");
			   break;
			   
		case 4:printf("YOU HAVE TO REALLY WORK HARD\n FAIL");
			   break;
			   
		case 5:printf("fail");
			   break;
			   
		case 6:printf("D");
			   break;
			   
		case 7:printf("C");
			   break;
			   
		case 8:printf("B");
			   break;
		
		case 9:printf("A");
			   break;
			   
		case 10:printf("A+");
			   break;
			   
		default:printf("wrong input");
			     break;
 	}
 }
