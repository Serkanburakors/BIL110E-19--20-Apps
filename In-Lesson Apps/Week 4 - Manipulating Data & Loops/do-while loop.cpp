//do-while
#include <stdio.h>
main(){
	printf("--------do-while loop--------\n");
	int t;
	
	t = 65;
	do{
		printf("The numeric value of %c is %d.\n", t, t);
		t++;
	}
	while (t<72);
	printf("------------------------------\n");
	return 0;
}
