#include <stdio.h>

main(){
	int num; 
	
	printf("Enter a single digit that can be divided by both 2 and 3:\n");
	for(num = 1; (num%2 != 0)||(num%3 != 0);/*This third part must be indicated but not be written)*/)
	    num = getchar() - '0'; /* If we have one row in for loop, then 
	we don't need to indicate its borders with curly braces*/
	printf("You wrote a number which fulfills the condition: %d\n", num);
	return 0;
}
