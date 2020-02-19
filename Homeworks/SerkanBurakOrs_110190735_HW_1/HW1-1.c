/* Write a code in C language
a. to calculate the sum of the odd integers from m to n. The variables m and n
should be defined by the user. This operation should be done in a function.
b. to calculate the sum of the even integers from m to n. The variables m and n
should be defined by the user. This operation should be done in a function.
(Note that the user should select if the sum will be for the odd or even numbers. Use switchcase
or if else if) */
#include <stdio.h>
main(){
	int x, sum, i, m;
	printf("Please enter limiting number\n");
	scanf("%d", &m);
	printf("Please enter 1 for sum of even numbers and 0 for sum of odd numbers\n");
	scanf("%d", &i);
	if(i==1){
		for(x=0; x<=m; x++){
			if(x % 2 == 0){
			sum += x;
			}
		}
		printf("The sum of even numbers between 1 to 50 is : %d\n", sum-1);
	}
	else if(i==0){
		for(x=0; x<=m; x++){
			if(x % 2 == 1){
			sum += x;
			}
		}
	printf("The sum of even numbers between 1 to 50 is : %d\n", sum-1);
	}
	return 0;	
}
