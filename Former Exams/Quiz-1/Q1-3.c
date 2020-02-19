/*Q1-3 - Write a program that asks an integer from 1 to 12 from the user and prints the
corresponding month name until user enter -1 sentinel value. Use switch
selection and while repetition statements.*/
#include <stdio.h>
#include <math.h>
int main(){
	int month;
	printf("Enter value 1 to 12\n");
	printf("Enter -1 value for exit\n");
	scanf("%d", &month);
	while(month!=-1){
		switch (month){
			case 1:
				printf("January\n");
				break;
			case 2:
				printf("February\n");
				break;
			case 3:
				printf("March\n");
				break;
			case 4:			
				printf("April\n");
				break;
			case 5:
				printf("May\n");
				break;
			case 6:
				printf("June\n");
				break;
			case 7:
				printf("July\n");
				break;
			case 8:
				printf("August\n");
				break;
			case 9:
				printf("September\n");
				break;
			case 10:
				printf("October\n");
				break;
			case 11:
				printf("November\n");
				break;
			case 12:
				printf("December\n");
				break;
			default:
				printf("You entered wrong number\n");
				break;
		}
		printf("Enter a value from 1 to 12 to see resutls or -1 to exit: " ); /* Without these two lines program goes
																			    into infinite loop, but why?*/
		scanf("%d", &month);
	}

	return 0;
}
/*
#include <stdio.h>
#include <math.h>
int main(void){
    int k;
    printf("Enter a value from 1 to 12 to see resutls or -1 to exit: " );
    scanf("%d", &k);
    while ( k!=-1 ){
        switch (k){
            case 1:
                printf("January\n");
                break;
    
            case 2:
                printf("February\n");
                break;
    
            case 3:
                printf("March\n");
                break;
    
            case 4:
                printf("April\n");
                break;
    
            case 5:
                printf("May\n");
                break;
        
            case 6:
                printf("June\n");
                break;
    
            case 7:
                printf("July\n");
                break;
    
            case 8:
                printf("August\n");
                break;
    
            case 9:
                printf("September\n");
                break;
            
            case 10:
                printf("October\n");
                break;
            
            case 11:
                printf("November\n");
                break;
            
            case 12:
                printf("December\n");
                break;
        
            default:
                printf("Incorrect value entered.\n");
                break;
        }
        printf("Enter a value from 1 to 12 to see resutls or -1 to exit: " );
        scanf("%d", &k);
    }
    return 0;
 }*/

