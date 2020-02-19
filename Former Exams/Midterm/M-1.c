/*M-1 - Write a C program to input a number from the user and check whether it is
positive, negative or zero using switch case multiple selection statement.*/
#include <stdio.h>
main (){
	int num, x;
	printf("Please enter an integer\n");
	scanf("%d", &num);
	if(num<0){
		x=-1;
	}
	else if(num>0){
		x=1;
	}
	else{
		x=0;
	}
	switch(x){
		case -1:
			printf("Your number is negative\n");
			break;
		case 0:
			printf("Your number is zero\n");
			break;
		case 1:
			printf("Your number is positive\n");
			break;
		default:
			;
	}
	return 0;	
}
/*#include <stdio.h>
int main () {
	int number,x;
	printf ("Enter a number: ");
	scanf ("%d", &number);
	if (number<0){
  		x= -1;
	}
	else if (number==0){
  		x=0;
	}
	else {
  		x=1;
	}
	switch (x){
		case -1:
		printf ("Number is negative");
	break;

	case 0:
		printf ("Number is zero");
	break;

	case 1:
		printf ("Number is positive");
	break;
	}
  	return 0;
}*/
