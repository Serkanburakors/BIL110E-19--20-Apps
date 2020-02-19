#include <stdio.h>

main(){
	int i, j;
	
	for(i=1; i<=3; i++){
		printf("The start of iteration(looping) %d of the outer loop.\n", i);
		for(j=1; j<=4; j++){
			printf("Iteraiton(looping) %d of the inner loop.\n", j);
		}
		printf("The end of iteration %d of the outer loop.\n\n", i);
	
	}	
	return 0;
}
