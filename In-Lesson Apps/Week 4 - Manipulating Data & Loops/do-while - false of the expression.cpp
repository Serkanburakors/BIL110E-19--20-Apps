//do-while
#include <stdio.h>
main(){
	printf("--------do-while loop--------\n");
	int t;
	
	t = 1;
	do{
		printf("The numeric value of the variable is %d.\n", t);
		t++;
	}
	while (t<8);
	printf("------------------------------\n");
	return 0;
}
