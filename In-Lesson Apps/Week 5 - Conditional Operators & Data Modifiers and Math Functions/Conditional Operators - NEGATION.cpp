#include <stdio.h>

main(){
	int i;
	
	i=7;
	printf("--------------------- Given number is %d -------------------\n\n", i);
	printf("!(i < 7) which means i is not smaller than seven yields : %d \nwhich means negation of the statement is true\n\n", i < 7);
	printf("!(i > 7) which means i is not larger than seven yields : %d \nwhich means negation of the statement is true\n\n", i > 7);
	printf("!(i == 7) which means i is equal to seven yields : %d \nwhich means negation of the statement is false\n\n", i == 7);
	return 0;
	
}
