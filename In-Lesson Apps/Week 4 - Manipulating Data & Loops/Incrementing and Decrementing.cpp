#include <stdio.h>

 main(){
 	int x, y, z, t, result;
 	
 	x = y = z = t = 1; //initialaizing the variables
 	
 	printf("Incrementing and Decrementing by One\n");
	printf("-----------------------------------------------------------------------------------------------------\n");
 	printf("Pre-decrement and pre-increment operators firstly evaluate then assign to right-hand variable\n");
	printf("Post-decrement and post-increment operators firstly assign to right-hand variable then evaluate\n");
	printf("-----------------------------------------------------------------------------------------------------\n");
	printf("First case of given values x = %d, y = %d, z = %d, t = %d\n", x, y, z, t);
 	result = ++x;
 	printf("++x evaluates to %d and x is now %d\n", result, x);
 	result = y++;
 	printf("y++ evaluates to %d and x is now %d\n", result, y);
 	result = --z;
 	printf("--z evaluates to %d and x is now %d\n", result, z);
 	result = t--;
 	printf("t-- evaluates to %d and x is now %d\n", result, t);
 	return 0;
}
